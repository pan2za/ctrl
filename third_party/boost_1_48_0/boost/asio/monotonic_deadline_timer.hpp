#pragma once

#include <boost/asio.hpp>
#include <boost/chrono.hpp>

namespace boost {
namespace asio {

/**
Extension to boost::asio to allow use of a monotonic clock via boost::chrono::steady_clock with the
asio::basic_deadline_timer.  Monotonic clocks are immune to adjustments of the system clock.
The underlying clock and time_type are chrono::steady_clock, but the durations are in posix_time::time_duration
in order to achieve a uniform and familiar interface. 
*/
template <> 
struct time_traits<boost::chrono::steady_clock>
{
    /**
    The underlying time type is based on chrono::steady_clock's time_point.
    */
    typedef boost::chrono::steady_clock::time_point time_type;

    /**
    But the duration is based upon posix_time's time_duration, just like the ASIO built-in deadline_timer.
    */
    typedef boost::posix_time::time_duration duration_type;

    /**
    Accessing the clock yields the current time from the steady_clock.
    */
    static time_type now()
    {
        return boost::chrono::steady_clock::now();
    }

    /**
    Form a new time point (in Chrono) by adding in a time_duration (from posix_time), using the thing they have in
    common -- microseconds.
    */
    static time_type add(const time_type& time, const duration_type& duration) 
    {
        return time + boost::chrono::microseconds(duration.total_microseconds());
    }

    /**
    Subtract two time points (in Chrono) to yield a time_duration (from posix_time), using the thing they have in
    common -- microseconds.
    */
    static duration_type subtract(const time_type& timeLhs, const time_type& timeRhs)
    {
        boost::chrono::microseconds oChronoDuration_us(
                boost::chrono::duration_cast<boost::chrono::microseconds>(timeLhs - timeRhs));
        return boost::posix_time::microseconds(oChronoDuration_us.count());
    }

    /**
    Test whether one chrono time is less than another.
    */
    static bool less_than(const time_type& timeLhs, const time_type& timeRhs)
    {
        return timeLhs < timeRhs;
    }

    /**
    Convert to posix_time::time_duration type, since this is what ASIO needs under the hood.  Since we're already
    representing durations in posix_time::time_duration, this is a mere pass-through.
    */
    static boost::posix_time::time_duration to_posix_duration(const duration_type& duration)
    {
        return duration;
    }
};

/**
Convenience typedef for pairing the steady_clock time_traits (above) with a basic_deadline_timer yielding
a ready-to-use deadline timer that is based on a monotonic time that is immune to system clock changes.
A Boosty name has been chosen, as it is expected that in the near future boost::asio will have this built in.
*/
typedef boost::asio::basic_deadline_timer<boost::chrono::steady_clock> monotonic_deadline_timer; 

} // namespace asio
} // namespace boost

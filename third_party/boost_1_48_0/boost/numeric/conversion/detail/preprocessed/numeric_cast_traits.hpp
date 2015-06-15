//
//! Copyright (c) 2011
//! Brandon Kohn
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
    
namespace boost { namespace numeric {

    template <>
    struct numeric_cast_traits
        <
            char
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            char
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int8_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint8_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int16_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint16_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int32_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint32_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::int64_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            boost::uint64_t
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            float
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            float
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            double
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            double
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , char
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<char> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::int8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::uint8_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint8_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::int16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::uint16_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint16_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::int32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::uint32_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint32_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::int64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::int64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , boost::uint64_t
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<boost::uint64_t> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , float
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<float> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<double> rounding_policy;
    }; 
    
    template <>
    struct numeric_cast_traits
        <
            long double
          , long double
        >
    {
#ifndef BOOST_NO_EXCEPTIONS
        typedef def_overflow_handler overflow_policy;
#else
        typedef silent_overflow_handler overflow_policy;
#endif
        typedef UseInternalRangeChecker range_checking_policy;
        typedef Trunc<long double> rounding_policy;
    }; 
       
}}

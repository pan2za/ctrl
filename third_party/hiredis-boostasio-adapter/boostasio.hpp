#ifndef __HIREDIS_BOOSTASIO_H__
#define __HIREDIS_BOOSTASIO_H__

#include <hiredis/hiredis.h>
#include <hiredis/async.h>

#include <iostream>
#include <string>
#include <stdio.h>

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/enable_shared_from_this.hpp>

#include <tbb/mutex.h>

using boost::asio::ip::tcp;

class redisBoostClient : public boost::enable_shared_from_this<redisBoostClient> 
{
public:
        redisBoostClient(boost::asio::io_service& io_service,
                redisAsyncContext *ac,
                tbb::mutex &mtex);

	void operate();

	void handle_read(boost::system::error_code ec);
        void handle_write(boost::system::error_code ec);
        void add_read(void *privdata);
        void del_read(void *privdata);
        void add_write(void *privdata);
        void del_write(void *privdata);
	void cleanup(void *privdata);

private:
boost::asio::ip::tcp::socket socket_;
tbb::mutex &mtex_;
redisAsyncContext *context_;
bool read_requested_;
bool write_requested_;
bool read_in_progress_;
bool write_in_progress_;
bool cleanup_;
};


/*C wrappers for class member functions*/
extern "C" void call_C_addRead(void *privdata);
extern "C" void call_C_delRead(void *privdata);
extern "C" void call_C_addWrite(void *privdata);
extern "C" void call_C_delWrite(void *privdata);
extern "C" void call_C_cleanup(void *privdata);




#endif /*__HIREDIS_BOOSTASIO_H__*/

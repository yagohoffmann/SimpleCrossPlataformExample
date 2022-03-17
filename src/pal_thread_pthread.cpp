#include <pthread.h>
#include <time.h>

#include "pal.hpp"

void pal_sleep(int sleep_time){
    struct timespec ts;
    time_t secs = sleep_time / 1000;
    ts.tv_nsec = (sleep_time%1000)*1000000;
    ts.tv_sec=secs;
    
    (void)nanosleep(&ts, NULL);
}
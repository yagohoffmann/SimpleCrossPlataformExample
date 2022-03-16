#include <windows.h>
#include "pal.hpp"

void pal_sleep(int sleep_time){
    Sleep(sleep_time);
}
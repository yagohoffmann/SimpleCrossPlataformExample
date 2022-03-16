#include <iostream>

#include "pal.hpp"

int main(){
    while (true)
    {
        std::cout << "Hello world!" << std::endl;
        pal_sleep(1000);
    }
    
}
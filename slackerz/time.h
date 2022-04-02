#ifndef TIME_H
#define TIME_H
#include "string.h"
#include <thread>

namespace slackerz{
    void sleep(int milliseconds){
      std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
      
    }
}

string time(){
        time_t rawtime;
        struct tm * timeinfo;
    
        time (&rawtime);
        timeinfo = localtime (&rawtime);
        string s = asctime(timeinfo);
        
        return s;
}
#endif
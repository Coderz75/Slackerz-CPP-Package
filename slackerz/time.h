#ifndef TIME_H
#define TIME_H
#include "string.h"
#include <thread>
#include <ctime>

string a(){
      time_t now = time(0);
      string dt = ctime(&now);
      return dt;
}

namespace slackerz{
  class time{
    public:
      void sleep(int milliseconds){
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
        
      }
      string localtime(){
        return a();
      }
  };
}

namespace slackerz{
}
#endif
#ifndef TIME_H
#define TIME_H
#include "default.h"
#include <thread>
#include <ctime>

static string a(){
      time_t now = std::time(0);
      string dt = ctime(&now);
      return dt;
}

namespace slackerz{
  class t{
    public:
      void sleep(float seconds){
        int milliseconds = seconds*1000;
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
      }
      void sleep(int seconds){
        int milliseconds = seconds*1000;
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
      }
      string localtime(){
        return a();
      }
  };
t time;
}

namespace slackerz{
}
#endif
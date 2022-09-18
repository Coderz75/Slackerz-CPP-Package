#ifndef DEFAULT_H
#define DEFAULT_H
#include "global.h"
#include <iostream>

namespace slackerz{
class r{
    public:
        int randint(int num = 99999){
            try{
                if(init_called == false){
                    throw "You need to call init_slackerz() to use random\n";
                }

                return rand() % num + 0;   
            }
            catch(const char* msg){
                cerr << msg;
                exit(1);
            }
        }
        int randint(int min, int max){
            try{
                if(init_called == false){
                    throw "You need to call init_slackerz() to use random\n";
                }

                return rand()%(max-min + 1) + min;
            }
            catch(const char* msg){
                cerr << msg;
                exit(1);
            }
        }
};
r random;
}


#endif

#ifndef DEV_H
#define DEV_H
#include <iostream>

namespace slackerz{
    void turnOffSync(){
        std::ios_base::sync_with_stdio(0);
    }
    void turnOnSync(){
        std::ios_base::sync_with_stdio(1);
    }
}
#endif
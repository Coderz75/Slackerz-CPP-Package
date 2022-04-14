#ifndef IMPORTS_H
#define IMPORTS_H
#include <iostream>

namespace slackerz{
    void clear(){
      std::cout << "\e[1;1H\e[2J";
    }
}
#endif
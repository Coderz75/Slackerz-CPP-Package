#ifndef IMPORTS_H
#define IMPORTS_H
#include <iostream>

namespace slackerz{
    void clear(){
      std::cout << "\x1B[2J\x1B[H";
    }
}
#endif
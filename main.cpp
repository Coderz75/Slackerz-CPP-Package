#include "slackerz/all.h"
using namespace slackerz;
int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    str l("hello");
    print(l.center(10,"O"));
    str hi(slackerz::input());
    print(hi);
}   

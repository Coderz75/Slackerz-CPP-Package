#include "slackerz/default.h"
using namespace slackerz;

int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    print("cool right?");
    str test("HoLa");
    print(test.zfill(10));
    print(test.swapcase());
}
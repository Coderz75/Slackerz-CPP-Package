#include "slackerz/default.h"
using namespace slackerz;

int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    print("cool right?");
    str test("Hola");
    print(test.zfill(10));
}
#include "slackerz/default.h"
using namespace slackerz;

int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    print("Cool right?");
    slackerz::list a({4,5,6});
    slackerz::list b({"hello","como","estas"});
    print(a);
    print(b);
}
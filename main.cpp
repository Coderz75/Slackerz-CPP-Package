#include "slackerz/default.h"
#include "slackerz/imports.h"
using namespace slackerz;

int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    print("cool right?");
    str x(input("Enter anything to clear the console "));
    clear();
    print("Cool right?");
}

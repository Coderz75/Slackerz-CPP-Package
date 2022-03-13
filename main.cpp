#include "slackerz/default.h"
using namespace slackerz;
int main() {
    init_slackerz();
    print("Welcome to Slackerz!");
    str x("heLlo");
    print(x.upper());
	print(x);
    str s("Hola Como Estas");
    printv(s.split(" "));
    print(x.capitilize());
}   

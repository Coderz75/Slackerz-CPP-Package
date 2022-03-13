#include "slackerz/all.h"
using namespace slackerz;
int main() {
    init_slackerz();
    print("Welcome to Slackerz!");
    str x("heLlo");
    print(x.upper());
	print(x);
    str s("Hola Como Estas");
    print(s.split(" "));
    print(x.capitilize());
    str l("HOLA");
    if(l.isupper() == true){
        print("HOLA is entirely uppercase");
    }
    str b("sss");
    if(b.islower() == true){
        print("sss entirely lowercase");
    }
    print(2);
    str k("Hola Como Estas");
    print(k);
    str m("2");
    print(toint(m));
}   

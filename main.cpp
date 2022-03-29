#include "slackerz/default.h"
using namespace slackerz;

int main() {
    init_slackerz();
    print("Welcome to SLACKERZ!");
    print("Cool right?");
    slist a({"hola","como","estas"});
    slist b({"hola"});
    a.extend(b);
    print(a.v);
}
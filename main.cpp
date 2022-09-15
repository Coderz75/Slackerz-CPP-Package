#include "slackerz/default.h"

int main() {
    init_slackerz();
    print("Welcome to Slackerz!");
    while(true){
        print(s::random.randint(1,99999),noend);
    }
}   


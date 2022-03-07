#include <iostream> //includes default c++
#include "slackerz/default.h" //includes default package of slackerz (you can do dev for dev package, imports for import package, and all for everything, but default should be enough)
#include<string> //not required, but reccomended 
using namespace std; //not required, but simplifies a whole lot



int main() {
    init_slackerz(); //initilizes slackerz from the start. Will slow load time at the beggining, but will speed up the program overall. Not required if you don't want it
    print("Welcome to Slackerz!");
}   

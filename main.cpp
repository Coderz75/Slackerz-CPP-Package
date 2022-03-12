#include "slackerz/default.h" //include slackerz default package. You can also do slackerz/dev.h [developers] slackerz/time.h [time] slackerz/imports.h [things python doesn't have] or slackerz/all.h for everything
using namespace slackerz; //Reccomended, but not required. If you remove this, you must use slackerz::[command] such as slackerz::print("Hello!")
int main() {
    init_slackerz(); //Initilizes slackerz. Not required though. Doing so speed up the program, but may increase time before it starts. You may use this on your choosing
    print("Welcome to Slackerz!"); // WELCOME TO SLACKERZ!!!! GET CODING!!!
}   

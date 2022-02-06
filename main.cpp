#include <iostream>
#include "runner.h"
#include <sstream>
#include<string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    //tests prints and printn
    prints("Hello");
    printn(50.3434);
    //tests conversions
    printn(fint(3544.2432));
    printn(sint("1"));
    prints(nums(1));
    //tests input
    string bob = input("Type your name: ");
    prints("Hello " + bob);
    //tests split and vector
    std::vector<string> a = split("a=b=c", "=");
    printv(a);
}

#include <iostream>
#include "runner.h"
#include<string>
using namespace std;



int main() {
  prints("Hello");
  printn(50.3434);
  printn(fint(3544.2432));
  printn(sint("1"));
  prints(nums(1));
  string bob = input("Type your name: ");
  prints("Hello " + bob);
}

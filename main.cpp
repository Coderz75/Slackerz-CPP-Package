#include <iostream>
#include<string>
using namespace std;
// print
void prints(string print){
  std::cout << print + "\n";
}
void printn(float number){
  cout << to_string(number) + "\n";
}

//CONVERSIONS
//To int

int fint(float number){
  return (int)number;
}
int sint(string something){
  return stoi(something);
}

//to string

string nums(float num){
  return to_string(num);
}

string input(string ask){
  string x;
  cout << ask;
  cin >> x;
  return x;
}

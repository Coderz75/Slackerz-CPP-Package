//Versinon: 1.0
//Source: https://github.com/Coderz75/Slackerz-Compiler
//This code will not automatically update, you must manually re-download the files. 

#include <iostream>
#include<string>
using namespace std;
// print
void prints(std::string print){
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
int sint(std::string something){
  return stoi(something);
}

//to string

string nums(float num){
  return to_string(num);
}

string input(std::string ask){
  string x;
  cout << ask;
  cin >> x;
  return x;
}
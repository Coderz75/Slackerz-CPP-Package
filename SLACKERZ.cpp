//Versinon: Adaptive
//Source: https://github.com/Coderz75/Slackerz-Compiler/tree/test
//This code will not automatically update, you must manually re-download the files.
//Branch: test [unstable]
#include <iostream>
#include <sstream>
#include<string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

// print
void prints(std::string print){
  std::cout << print + "\n";
}
void printn(float number){
  cout << to_string(number) + "\n";
}

void printv(std::vector<string> a){
    for(int i=0; i < a.size(); i++)
    std::cout << a.at(i) << '\n';
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

std::vector<std::string>  split(string a, string x){
    std::vector<std::string> so {};
    string s = a;
    string delim = x;
    auto start = 0U;
    auto end = s.find(delim);
    while (end != std::string::npos)
    {
        string m = s.substr(start, end - start);
        so.push_back(m);
        start = end + delim.length();
        end = s.find(delim, start);
    }

    so.push_back(s.substr(start, end));
    return so;
}
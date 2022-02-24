//Versinon: Adaptive
//Source: https://github.com/Coderz75/Slackerz-Compiler/tree/test
//This code will not automatically update, you must manually re-download the files.
//Branch: test [unstable]
#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
using namespace std;


// print
void print(std::string print){
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

string is(int num){
  return to_string(num);
}

string input(std::string ask){
  string x;
  cout << ask;
  getline(cin, x);
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

std::vector<string> range(int num){
  std::vector<string> so {};
  int i = num-1;
  while(i != 0){ 
    so.push_back(is(i));
    if (0>i){
      i = i+1;
    }else{
      i = i-1;
    }
    
  }
  so.push_back(is(i));
  reverse(so.begin(), so.end());
  return so;
}

int random(int num){
  int a = rand() % num;
  return a;
}
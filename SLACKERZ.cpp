//Versinon: Adaptive
//Source: https://github.com/Coderz75/Slackerz-Compiler/tree/test
//This code will not automatically update, you must manually re-download the files.
//Branch: test [unstable]
#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <pthread.h>
#include <thread>
using namespace std;

int fint(float number){
  return (int)number;
}
int sint(std::string something){
  return stoi(something);
}



// print
void print(std::string print){
    std::cout << print + "\n";
    ios_base::sync_with_stdio(0);
}
void printn(float num){
    cout << to_string(num) + "\n";
    ios_base::sync_with_stdio(0);
}

void printv(std::vector<string> a){
    for(int i=0; i < a.size(); i++)
    std::cout << a.at(i) << '\n';
    ios_base::sync_with_stdio(0);
}

//CONVERSIONS
//To int



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

string cstr(char a){
    char l = a;
    string f;
    f.push_back(l);
    return f;
}
void turnOffSync(){
    ios_base::sync_with_stdio(0);
}
void turnOnSync(){
    ios_base::sync_with_stdio(1);
}

void clear(){
    
    std::cout<< u8"\033[2J\033[1;1H"; 
}


void init_slackerz(){
    ios_base::sync_with_stdio(0);
    clear();
    const auto processor_count =  thread::hardware_concurrency();
    pthread_t threads[processor_count];
}

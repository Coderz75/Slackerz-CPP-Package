#ifndef DEFAULT_H
#define DEFAULT_H

#include <iostream>
#include "string.h"

namespace slackerz{


    
    std::string input(std::string ask = "");//collects user input
//

    int random(int thing); //random
    
    std::string cstr(char a); //char to string
    
    void init_slackerz(); //initilizes slackerz
    
    std::string upper(std::string); //convert string to uppercase
    
    std::string lower(std::string); //convert string to lowercase
    
    int abs(int num); //gets absolute value of an int

    int random(int num = 9999999); // returns random int


//to int
    template <typename U>
    int toint(U something);

    template<>
    int toint<float>(float something){
      return (int)something;
    }
    template<>
    int toint<std::string>(std::string something){
      return stoi(something);
    }
    template<>
    int toint<slackerz::str>(slackerz::str something){
        string k = something.v;
        return stoi(k);
    }

//to string
    template <typename L>
    string tostring(L a);

    template<>
    string tostring<float>(float a){
      return to_string(a);
    }
    template<>
    string tostring<int>(int a){
      return to_string(a);
    }
    template<>
    string tostring<double>(double a){
      return to_string(a);
    }
    template<>
    string tostring(bool b) {
    return b ? "true" : "false";
    }

//print
    template <typename T>
    void print(T a);

    template<>
    void print<string>(std::string a){
        std::cout << a + "\n";
    }
    template<>
    void print<float>(float a){
        cout << to_string(a) + "\n";
    }
    template<>

    void print<std::vector<string>>(std::vector<string> a){
        for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << '\n';
    }
    template<>
    void print<int>(int a){
        cout << to_string(a) + "\n";
    }
    template<>
    void print<char const*>(char const* a){
        string l = str(a);
        cout << l + "\n";
    }
    template<>
    void print<slackerz::str>(slackerz::str a){
        cout << a.convstr() + "\n";
    }
    template<>
    void print<bool>(bool a){
        cout << tostring(a) + "\n";
    }
}

#endif

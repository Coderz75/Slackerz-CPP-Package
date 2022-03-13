#ifndef DEFAULT_H
#define DEFAULT_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

namespace slackerz{

// print


    int fint(float number); //floats to int
    
    int sint(std::string something); //string to int
    
    //to string
    
    std::string nums(float num); //float to string
    
    std::string input(std::string ask);//collects user input
    
    

    std::string is(int num); //int to string

//

    int random(int thing); //random
    
    std::string cstr(char a); //char to string
    
    void init_slackerz(); //initilizes slackerz
    
    std::string upper(std::string); //convert string to uppercase
    
    std::string lower(std::string); //convert string to lowercase
    
    int abs(int num); //gets absolute value of an int
    class str{
        private:
            
            
            
            string m;
        public:
            string v;
            str(string s){
                v = s;
            }
            string upper(){
                string data = v;
                std::for_each(data.begin(), data.end(), [](char & c){
                    c = ::toupper(c);
                });
                return data;
            }
            string lower(){
                string data = v;
                std::for_each(data.begin(), data.end(), [](char & c){
                    c = ::tolower(c);
                });
                return data;
            }
			operator std::string () const { // C++ verison of __repr__
        		return v;
    		}
            std::vector<std::string>  split(string x){
                std::vector<std::string> so {};
                string s = v;
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
            string capitilize(){
                string a = v;
                a[0] = toupper(a[0]); 
                return a;
            }
            bool isupper(){
                string m = v;
                for (int i = 0; i < m.length(); i++) {
                  if(::isupper(m[i])){  
                  }else{
                      return false;
                  }
                }
                return true;
            }
            bool islower(){
                string m = v;
                for (int i = 0; i < m.length(); i++) {
                  if(::islower(m[i])){  
                  }else{
                      return false;
                  }
                }
                return true;
            }
            string convstr(){
                return v;
            }
    };
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
}

#endif
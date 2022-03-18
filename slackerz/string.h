#ifndef STRING_H
#define STRING_H
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include "default.h"
using namespace std;
namespace slackerz{

    class str{
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
                std::vector<std::string>  split(string x = " "){
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
                string center(int s, string a = " "){
                    int spaces = s - v.length() ;
                    spaces = spaces/2;
                    string returnval = v;
                    for(int i = 0; i<spaces; i++){
                        returnval = a + returnval;
                    }
                    for(int i = 0; i<spaces; i++){
                        returnval = returnval+a;
                    }
                    return returnval;
                    
                }
                string zfill(int length){
                    string l = v;
                    int zeros = length - v.length();
                    for(int i = 0; i< zeros; i++){
                        l = "0" + l; 
                    }
                    return l;
                }
                string swapcase(){
                    string a = v;
                    for(int i = 0; i < a.length(); i++){
                        if(::islower(a[i])){
                            a[i] = toupper(a[i]);
                        }else{
                            a[i] = tolower(a[i]);
                        }
                    }
                    return a;
                }
                bool startswith(string a){
                    string l = v;
                    for (int i = 0; i< a.length(); i++){
                        if (a[i] != l[i]){
                            return false;
                        }
                    }
                    return true;
                }
                
        };
}
#endif

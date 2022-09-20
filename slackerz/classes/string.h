#ifndef STRING_H
#define STRING_H
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
namespace slackerz{

    class str{
            public:
                string v;
                str(string s){
                    v = s;
                }
                str(char* a){
                    v = a;
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
                std::vector<std::string>  split(string x = " ", int m = false){
                    std::vector<std::string> so {};
                    string* s;
                    s = new string;
                    *s = v;
                    string* delim;
                    delim = new string;
                    *delim = x;
                    auto start = 0;
                    auto end = (*s).find(*delim);
                    if (m != false){

                        int it = 0;
                        while (end != std::string::npos && it < m)
                        {
                            string m = (*s).substr(start, end - start);
                            so.push_back(m);
                            start = end + (*delim).length();
                            end = (*s).find(*delim, start);
                            it = it+1;
                        }
                    }else{
                        while (end != std::string::npos)
                        {
                            string m = (*s).substr(start, end - start);
                            so.push_back(m);
                            start = end + (*delim).length();
                            end = (*s).find(*delim, start);
                        }
                

                
                    so.push_back((*s).substr(start, end));
                    delete delim;
                    delete s;
                    return so;
                  }
                return{v};
                }
                string capitilize(){
                    string a = v;
                    a[0] = toupper(a[0]); 
                    return a;
                }
                bool isupper(){
                    string* m;
                    m = new string;
                    *m = v;
                    for (int i = 0; i < (*m).length(); i++) {
                      if(::isupper((*m)[i])){  
                      }else{
                          delete m;
                          return false;
                      }
                    }
                    delete m;
                    return true;
                }
                bool islower(){
                    string* m;
                    m = new string;
                    *m = v;
                    for (int i = 0; i < (*m).length(); i++) {
                      if(::islower((*m)[i])){  
                      }else{
                          delete m;
                          return false;
                      }
                    }
                    delete m;
                    return true;
                }
                string convstr(){
                    return v;
                }
                string center(int s, string a = " "){
                    int* spaces ;
                    spaces = new int;
                    *spaces = s - v.length();
                    *spaces = *spaces/2;
                    string returnval = v;
                    for(int i = 0; i<*spaces; i++){
                        returnval = a + returnval;
                    }
                    for(int i = 0; i<*spaces; i++){
                        returnval = returnval+a;
                    }
                    delete spaces;
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
                bool startswith(string a, int b = 0, int c = 0){
                    string l = v;
                    int x = c;
                    if (x== 0){
                        x = a.length();
                    }
                    for (int i = 0; i< a.length(); i++){
                        if (a[i+b] != l[i+b]){
                            return false;
                        }
                    }
                    return true;
                }
                bool endswith(string suffix){
                    if (v.length() < suffix.length()) {
                        return false;
                    }
                    return std::equal(suffix.rbegin(), suffix.rend(), v.rbegin());
                }
                
        };
}
#endif

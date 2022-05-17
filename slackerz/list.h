#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

namespace slackerz{
        class list{
            public:
                string type;
                std::vector<string> v;
                std::vector<int> v2;

                list(vector<string> a){
                    v = a;
                    type = "string";
                }
                list(vector<int> a){
                    v2 = a;
                    type="int";
                }
                void append(string val = "", int val2 = 0){
                    if (type == "string"){
                        v.push_back(val);
                    }else if(type == "int"){
                        v2.push_back(val2);
                    }
                    
                }
                void insert(int place, string val = "", int val2 = 0){
                    if (type == "string"){v.insert(v.begin()+place,val);}
                    else if(type == "int"){v2.insert(v2.begin()+place,val2);}
                }

                void extend(vector<string> a = {}, vector<int> b= {}){
                    if (type == "string"){
                        for(int i = 0; i< a.size();i++){
                            v.push_back(a[i]);
                        }
                    }else if( type == "int"){
                        for(int i = 0; i< b.size();i++){
                            v2.push_back(b[i]);
                        }
                    }
                }

                void pop(int a = -999999){
                    if (type == "string"){
                    if(a != -999999){
                        v.erase(v.begin()+a);
                    }else{
                        v.pop_back();
                    }
                    }else if (type == "int"){
                        if(a != -999999){
                            v2.erase(v2.begin()+a);
                        }else{
                            v2.pop_back();
                        }   
                    }

                }

                void remove(string a = "", int b = 0){
                    if (type == "string"){
                        v.erase(std::remove(v.begin(), v.end(), a), v.end());
                    }else if(type == "int"){
                        vector<int>::iterator new_end;
                        v2.erase(std::remove(v2.begin(), v2.end(), b), v2.end());
                    }
                }
                void clear(){
                    v.clear();
                    v2.clear();
                }

                vector<string> copy(){return v;}

                vector<int> copy(int i = 0){return v2;}

                int count(string a = "", int b = 0){
                    int x = 0;
                    if (type == "string"){
                        for(int i =0; i<v.size();i++){if (v[i] == a){x = x+1;}}   
                    }else if(type == "int"){
                        for(int i =0; i<v2.size();i++){if (v2[i] == b){x = x+1;}}
                    }
                    return x;
                }

                int index(string a = "", int b = 0){
                    if (type == "string"){
                        for(int i = 0; i<v.size();i++){if(v[i] == a){return i;}}
                    } else if (type == "int"){
                        for(int i = 0; i<v2.size();i++){if(v2[i] == b){return i;}}
                    }
                    return false;
                }

                void reverse(){
                    vector<string> *a;
                    a = new vector<string>;
                    for (int i=v.size()-1; i>=0; i--){
                        (*a).push_back(v[i]); 
                    }
                    v = *a;
                    vector<int> *b;
                    b = new vector<int>;
                    for (int i=v2.size()-1; i>=0; i--){
                        (*b).push_back(v2[i]); 
                    }
                    v2 = *b;
                }

                operator vector<string> () const { // C++ verison of __repr__
                    return v;
                }
                operator vector<int> () const { // C++ verison of __repr__
                    return v2;
                }
                
        };

    template<typename T>
    int len(T a);
    template<>
    int len(list a){
        return a.v.size();
    }
    template<>
    int len(string a){
        return a.length();
    }
    template<>
    int len(int a){
        return to_string(a).length();
    }
}
#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

namespace slackerz{
        class list{
            private:
                string type;
            public:
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
                //CONVERTED UNTIL HERE

                void remove(string a){
                    v.erase(std::remove(v.begin(), v.end(), a), v.end());
                }
                void clear(){
                    v.clear();
                }

                vector<string> copy(){return v;}

                int count(string a){
                    int x = 0;
                    for(int i =0; i<v.size();i++){if (v[i] == a){x = x+1;}}
                    return x;
                }

                int index(string a){
                    for(int i = 0; i<v.size();i++){if(v[i] == a){return i;}}
                    return false;
                }

                void reverse(){
                    vector<string> *a;
                    a = new vector<string>;
                    for (int i=v.size()-1; i>=0; i--){
                        (*a).push_back(v[i]); 
                    }
                    v = *a;
                }

                operator vector<string> () const { // C++ verison of __repr__
                    return v;
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
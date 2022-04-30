#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

namespace slackerz{
    namespace s{
        class list{
            public:
                std::vector<string> v;

                list(vector<string> a){
                    v = a;
                }
                void append(string a){
                    v.push_back(a);
                }
                void insert(int place, string val){
                    v.insert(v.begin()+place,val);
                }

                void extend(vector<string> a){
                    for(int i = 0; i< a.size();i++){
                        v.push_back(a[i]);
                    }
                }

                void pop(int a = -999999){
                    if(a != -999999){
                        v.erase(v.begin()+a);
                    }else{
                        v.pop_back();
                    }
                }

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
    }

    namespace i{
        class list{
            public:
                std::vector<int> v;

                list(vector<int> a){
                    v = a;
                }
                void append(int a){
                    v.push_back(a);
                }
                void insert(int place, int val){
                    v.insert(v.begin()+place,val);
                }

                void extend(vector<int> a){
                    for(int i = 0; i< a.size();i++){
                        v.push_back(a[i]);
                    }
                }

                void pop(int a = -999999){
                    if(a != -999999){
                        v.erase(v.begin()+a);
                    }else{
                        v.pop_back();
                    }
                }

                void remove(int a){
                    v.erase(std::remove(v.begin(), v.end(), a), v.end());
                }
                void clear(){
                    v.clear();
                }

                vector<int> copy(){return v;}

                int count(int a){
                    int x = 0;
                    for(int i =0; i<v.size();i++){if (v[i] == a){x = x+1;}}
                    return x;
                }

                int index(int a){
                    for(int i = 0; i<v.size();i++){if(v[i] == a){return i;}}
                    return false;
                }

                void reverse(){
                    vector<int>* a;
                    a = new vector<int>;
                    for (int i=v.size()-1; i>=0; i--){
                        (*a).push_back(v[i]); 
                    }
                    v = *a;
                }

                operator vector<int> () const { // C++ verison of __repr__
                    return v;
                }
                
        };
    }
    template<typename T>
    int len(T a);
    template<>
    int len(i::list a){
        return a.v.size();
    }
    template<>
    int len(s::list a){
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
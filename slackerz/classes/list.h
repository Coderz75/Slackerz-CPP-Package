#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

namespace slackerz{

        template <class T>
        class list{
            public:
                std::vector<T> v;

                list(vector<T> a){
                    v = a;
                }

                list(std::list<T> &a){
                    std::vector<T> result;
                    for (T &c: a) {
                        result.push_back(c);
                    }
                    v = result;
                }
                operator T () const { // C++ verison of __repr__
            		return v;
        		}

                void append(T val){
                    v.push_back(val)
                    
                }
                void insert(int place, T val){
                    v.insert(v.begin()+place,val);
                }
                void extend(slackerz::list<T> x){
                    vector<T> a = x.v;
                    for(int i = 0; i< a.size();i++){
                            v2.push_back(a[i]);
                    }

                }
                void extend(vector<T> a){
                        for(int i = 0; i< a.size();i++){
                            v.push_back(a[i]);
                        }
                }

                void pop(int a = -999999){
                    if(a != -999999){
                        v.erase(v.begin()+a);
                    }
                }

                void remove(T a ){
                        v.erase(std::remove(v.begin(), v.end(), a), v.end());
                }
                void clear(){
                    v.clear();
                }

                vector<T> copy(){return v;}


                int count(T a){
                    int x = 0;

                    for(int i =0; i<v.size();i++){if (v[i] == a){x = x+1;}}   

                    return x;
                }

                int index(T a ){

                    for(int i = 0; i<v.size();i++){if(v[i] == a){return i;}}

                    return false;
                }

                void reverse(){
                    vector<T> *a;
                    a = new vector<T>;
                    for (int i=v.size()-1; i>=0; i--){
                        (*a).push_back(v[i]); 
                    }
                    v = *a;
                    delete a;
                }
                
        };

    template<typename T>
    int len(T a);
    template<>
    int len(slackerz::list<string> a){
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
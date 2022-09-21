#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

namespace slackerz{

        template <class T>
        class list{
            public:
                std::vector<T> v;

				template< typename ... Strings>
				void enterargs(T arg, const Strings&... rest){
					v.push_back(arg);
					enterargs(rest...);
				}

				void enterargs(){};

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
                list(T* a){
					vector<T> r(a);
					v = a;
                }
				list(){ v = {};}
				template< typename ... Strings>
				list(T arg, const Strings&... rest) {
					v.push_back(arg);
					enterargs(rest...);
				}

                operator T () const { // C++ verison of __repr__
            		return v;
        		}

                void append(T val){
                    v.push_back(val);
                    
                }
                void insert(int place, T val){
                    v.insert(v.begin()+place,val);
                }

                void extend(std::list<T> list){
                    for (T &c: list) {
                        v.push_back(c);
                    }
                }

                void extend(){}

                template< typename ... Strings>
                void extend(T arg, const Strings&... rest){
                    v.push_back(arg);
                    extend(rest...);
                }

                void pop(int a){v.erase(v.begin()+a);}
                void pop(){ v.pop_back();}

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
    template<typename X>
    int len(slackerz::list<X> a){
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
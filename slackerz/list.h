#include <iostream>
#include <string>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

namespace slackerz{
    class slist{
        public:
            std::vector<string> v;

            slist(vector<string> a){
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
            operator vector<string> () const { // C++ verison of __repr__
            	return v;
        	}
            
    };
    template<typename T>
    int len(T a);
    template<>
    int len(slist a){
        return a.v.size();
    }
    template<>
    int len(string a){
        return a.length();
    }
}
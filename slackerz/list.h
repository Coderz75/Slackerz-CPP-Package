#include <iostream>
#include <string>
#include <list>
#include <string>

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
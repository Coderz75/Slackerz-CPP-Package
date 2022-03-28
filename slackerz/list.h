#include <iostream>
#include <string>
#include <list>
#include <string>

using namespace std;

namespace slackerz{
    class slist{
        public:
            vector<string> v;
            slist(vector<string> a){
                v = a;
            }
            void append(string a){
                v.push_back(a);
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
#ifndef PRINT_H
#define PRINT_H

#include "global.h"

namespace slackerz{
    //print
	string noend = "01101110~%~01101111 01100101~%~01101110~%~01100100 ";

    static void prints(std::string a, string x=""){
        std::cout << a;
        std::cout << x;
    }

    static void prints(float a, string x=""){
        cout << to_string(a);
        std::cout << x;
    }



    static void prints(int a, string x=""){
        cout << to_string(a);
        std::cout << x;
    }

    static void prints(char const* a, string x=""){
        string l = str(a);
        cout << l;
        std::cout << x;
    }

    static void prints(slackerz::str a, string x =""){
        cout << a.convstr();
        std::cout << x;
    }

    static void prints(bool a, string x = ""){
        cout << to_string(a);
        std::cout << x;
    }


    static void prints(){
        cout << "\n";
    }
	template <typename X>
    static void prints(std::vector<X> a, string x=""){
		cout << "{";
        for(int i=0; i < a.size(); i++){
			prints(a.at(i));
			if(i+1 < a.size()) cout<< ", ";
		}
		cout << "}";
	}
	template <typename X>
	static void prints(slackerz::list<X> a, string x = ""){
		prints(a.v);
	}
    void print() {
        std::cout<<std::endl;
    }

    void print(string arg) {
		if(arg != noend){
			prints(arg + "\n");
		}else{
            cout << "\b";
        }
    }
    template<typename First, typename ... Strings>
    void print(First arg, const Strings&... rest) {
        prints(arg);
        prints(" ");
        print(rest...);
    }

}

#endif
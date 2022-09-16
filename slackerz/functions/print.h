#ifndef PRINT_H
#define PRINT_H

#include "default.h"

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


    static void prints(std::vector<string> a, string x=""){
        for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << x;
    }


    static void prints(std::vector<int> a, string x=""){
        for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << x;
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
    void print() {
        std::cout<<std::endl;
    }

    void print(string arg) {
		if(arg != noend){
			prints(arg);
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
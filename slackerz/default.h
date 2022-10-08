#ifndef _DEFAULT_H_
#define _DEFAULT_H_

#include <iostream>
#include "classes/string.h"
#include "classes/list.h"
#include <ctime>
#include "functions/print.h"
#include "classes/random.h"
#include "classes/global.h"
#include "functions/global.h"


bool init_called = false;
using namespace slackerz;

#ifdef _MSC_VER 
	#define not !=
	#define and &&
	#define or ||
#endif

#define var auto
#define fn auto

namespace s = slackerz;

static void x(){
    srand((unsigned) std::time(0));
}
namespace slackerz{

    
    std::string input(std::string ask = ""){
      cout << "\n";
      string x;
      cout << ask;
      getline(cin, x);
      return x;
    }
    
    string is(int num){
      return to_string(num);
    }

    std::vector<string> range(int num){
        std::vector<string> so {};
        int* i ;
        i = new int;
        *i = num-1;
        while(*i != 0){ 
            so.push_back(is(*i));
            if (0>*i){
            *i = *i+1;
            }else{
            *i = *i-1;
            }
            
        }
        so.push_back(is(*i));
        delete i;
        reverse(so.begin(), so.end());
        return so;
    }
    
    void init_slackerz(int a= 0){ // initilizes lackerz
        ios_base::sync_with_stdio(a);
        x();
        bool sync = a;
        init_called = true;
    }
    
//to int
    template <typename U>
    int toint(U something);

    template<>
    int toint<float>(float something){
      return (int)something;
    }
    template<>
    int toint<std::string>(std::string something){
      return stoi(something);
    }
    template<>
    int toint<slackerz::str>(slackerz::str something){
        string k = something.v;
        return stoi(k);
    }
    template<>
    int toint<bool>(bool something){
        return int(something);
    }
    template<>
    int toint<double>(double something){
        return int(something);
    }
    template<>
    int toint<char>(char something){
        return int(something);
    }

//to string
    template <typename L>
    string tostring(L a);

    template<>
    string tostring<float>(float a){
      return to_string(a);
    }
    template<>
    string tostring<int>(int a){
      return to_string(a);
    }
    template<>
    string tostring<double>(double a){
      return to_string(a);
    }
    template<>
    string tostring(bool b) {
    return b ? "true" : "false";
    }
    template<>
    string tostring(char a){
        char l = a;
        string f;
        f.push_back(l);
        return f;
    }
    //To float

    template <typename H>
    float tofloat(H a);

    template<>
    float tofloat(int a){
        return (float) a;
    }

    template<>
    float tofloat(std::string a){
        int x = toint(a);
        return (float) x;
    }

    template<>
    float tofloat(char a){
        int x = toint(a);
        return (float) x;
    }

    template<>
    float tofloat(bool a){
        int x = toint(a);
        return (float) x;
    }
    template<>
    float tofloat(double a){
        return (float) a;
    }

    template<>
    float tofloat<slackerz::str>(slackerz::str a){
        string k = a.v;
        return tofloat(k);
    }



}

#endif

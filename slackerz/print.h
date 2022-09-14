namespace slackerz{
    //print
	#define noend 0111101111

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

    static void prints(slackerz::list a, string x = ""){
        if(a.type == "string"){
            for(int i=0; i < a.v.size(); i++){
                std::cout << a.v[i] << x;
            }
        }else if(a.type == "int"){
            for(int i=0; i < a.v2.size(); i++){
                std::cout << a.v2[i] << x;
            }
        }
    }

    static void prints(){
        cout << "\n";
    }
    void print() {
        std::cout<<std::endl;
    }

    void print(int arg) {
		if(arg != noend){
			prints("using int func");
			prints(arg);
		}
    }
    template<typename First, typename ... Strings>
    void print(First arg, const Strings&... rest) {
        prints(arg);
        prints(" ");
        print(rest...);
    }

}
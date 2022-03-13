#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

namespace slackerz{
    void print(std::string); //prints string
    void printn(float number);//prints float

    int fint(float number); //floats to int
    
    int sint(std::string something); //string to int
    
    //to string
    
    std::string nums(float num); //float to string
    
    std::string input(std::string ask);//collects user input
    
    void printv(std::vector<std::string> a); //prints a vector
    

    std::string is(int num); //int to string

//

    int random(int thing); //random
    
    std::string cstr(char a); //char to string
    
    void init_slackerz(); //initilizes slackerz
    
    std::string upper(std::string); //convert string to uppercase
    
    std::string lower(std::string); //convert string to lowercase
    
    int abs(int num); //gets absolute value of an int
    class str{
        private:
            string data;
            string a;
            string x;
        public:
            string v;
            str(string s){
                v = s;
                data = v;
                a = v;
                x = v;
            }
            string upper(){
                std::for_each(data.begin(), data.end(), [](char & c){
                    c = ::toupper(c);
                });
                return data;
            }
            string lower(){
                
                std::for_each(data.begin(), data.end(), [](char & c){
                    c = ::tolower(c);
                });
                return data;
            }
			operator std::string () const { // C++ verison of __repr__
        		return v;
    		}
            std::vector<std::string>  split(string x){
                std::vector<std::string> so {};
                string s = a;
                string delim = x;
                auto start = 0U;
                auto end = s.find(delim);
                while (end != std::string::npos)
                {
                    string m = s.substr(start, end - start);
                    so.push_back(m);
                    start = end + delim.length();
                    end = s.find(delim, start);
                }
            
                so.push_back(s.substr(start, end));
                return so;
            }
            string capitilize(){
                a[0] = toupper(a[0]); 
                return a;
            }
    };
}

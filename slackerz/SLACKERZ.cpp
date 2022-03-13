#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
#include <time.h>

using namespace std;

namespace slackerz{

    
    //to string
    
    string nums(float num){
      return to_string(num);
    }
    
    string is(int num){
      return to_string(num);
    }
    
    string input(std::string ask){
      string x;
      cout << ask;
      getline(cin, x);
      return x;
    }
    
    std::vector<string> range(int num){
      std::vector<string> so {};
      int i = num-1;
      while(i != 0){ 
        so.push_back(is(i));
        if (0>i){
          i = i+1;
        }else{
          i = i-1;
        }
        
      }
      so.push_back(is(i));
      reverse(so.begin(), so.end());
      return so;
    }
    
    int random(int num){
      int a = rand() % num;
      return a;
    }
    
    string cstr(char a){
        char l = a;
        string f;
        f.push_back(l);
        return f;
    }

    void turnOffSync(){
        ios_base::sync_with_stdio(0);
    }
    void turnOnSync(){
        ios_base::sync_with_stdio(1);
    }
    
    void clear(){
        #ifdef _WIN32 // Includes both 32 bit and 64 bit
            #include <windows.h>
              HANDLE                     hStdOut;
              CONSOLE_SCREEN_BUFFER_INFO csbi;
              DWORD                      count;
              DWORD                      cellCount;
              COORD                      homeCoords = { 0, 0 };
            
              hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
              if (hStdOut == INVALID_HANDLE_VALUE) return;
            
              /* Get the number of cells in the current buffer */
              if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
              cellCount = csbi.dwSize.X *csbi.dwSize.Y;
            
              /* Fill the entire buffer with spaces */
              if (!FillConsoleOutputCharacter(
                hStdOut,
                (TCHAR) ' ',
                cellCount,
                homeCoords,
                &count
                )) return;
            
              /* Fill the entire buffer with the current colors and attributes */
              if (!FillConsoleOutputAttribute(
                hStdOut,
                csbi.wAttributes,
                cellCount,
                homeCoords,
                &count
                )) return;
            
              /* Move the cursor home */
              SetConsoleCursorPosition( hStdOut, homeCoords );
    	#else
            std::cout<< u8"\033[2J\033[1;1H"; 
    	#endif
    
    }
    
    
    void init_slackerz(){
        pthread_t threads[2];
        clear();
    }
    
    
    int abs(int num){
        return abs(num);
    }

}
string time(){
      time_t rawtime;
      struct tm * timeinfo;
    
      time (&rawtime);
      timeinfo = localtime (&rawtime);
        string s = asctime(timeinfo);
        
        return s;
}

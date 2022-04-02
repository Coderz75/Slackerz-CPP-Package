#ifndef IMPORTS_H
#define IMPORTS_H
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

namespace slackerz{
    void clear(){
        #ifdef _WIN32 // Includes both 32 bit and 64 bit
            
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
}
#endif
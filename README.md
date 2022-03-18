# SLACKERZ!!!!!

This is a c++ package that makes c++ (much) easier, more info at https://coderz75.github.io/slackerz.html

This project is licensed underneath the [MIT LICENSE](https://github.com/Coderz75/Slackerz-Compiler/blob/main/slackerz/docs/LICENSE.txt)


### Running the file:
----
(This is the procedure on windows, linux should be similar though)

First, of course, you have to install a compiler, (for example [MSYS2](https://www.msys2.org/)) - follow the steps there

If you are using linux you likely already have a compiler installed, try checking by running

      g++ --version
      clang --version

If you get an error on both, you need to install a compiler

Make sure you added the directory to your path

Once your ready, open command prompt (or terminal for linux) and run these commands:

      cd [your file's path]

      g++ -o [program name] -I Path2Hello [Main file you are running] slackerz/SLACKERZ.cpp

      .\[program name]
      
slackerz/SLACKERZ.cpp depends on where you put the slackerz folder, if you moved it, put it in the path you put it in

for example, if you were to use the template:

      cd [your file's path]

      g++ -o program -I Path2Hello main.cpp slackerz/SLACKERZ.cpp

      .\program

[This should do it on windows]

to search up your file's path, right click the folder your file is in, and press copy as path. (or something similar to it) then paste it after the cd


### Credits
_______________________

[Actiniumn404](https://github.com/actiniumn404) - Help with the str class, header gaurds, and print, toint, and tostring.

[Coderz75](https://github.com/coderz75) - Main bulk
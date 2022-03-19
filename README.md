# SLACKERZ!!!!!

This is a c++ package that makes c++ (much) easier

This project is licensed underneath the [MIT LICENSE](https://github.com/Coderz75/Slackerz-Compiler/blob/main/slackerz/docs/LICENSE.txt)


# Table of Contents:

Packages:

1. [Default package](#default)


[Running the program](#run)

[Credits](#credits)

<h1 id = "default"> Default Package </h1>

The default package consists of many items. This package is required for slackerz, as many other functions rely on it

You can add the default package by putting

      #include <slackerz/default.h>

At the start of your code

<h3>Init Slackerz</h3>

This functions follows the syntax of:

    void init_slackerz(optional int)

to call it, just type init_slackerz(); in your code

You may put a 1 or a 0 in the parenthesis, this controls the speed and working of the program. The default is 0. You may want to switch it to 1 depending if you are using sleep or clear functions. (more about that later.)

<h3>Print</h3>

This function is the heart of every python program. It follows this syntax:

       void print(T a, optional: string end = "\n");

The T means that it can handle any type, from boolean to string.

The end varaible is optional, this starts a new line

for example, to print on a new line:

      print("Hello");
And to print on the same line:

      print("hello","");

<h3>Input</h3>

This is likely one of the most popular python functions. It follows this syntax: 

      string input(optional: string);

Input returns a string, for example, I can do:

       str l(input("Type in your name"));
       print(l);
And it will print out what i types into the console

<h3>Random</h3>
Slackerz doesn't have a random class, to random.randit(x) won't work, instead, it is random(optional int)

<h3>Absolute Value</h3>
This function gets the absolute value of an int. It follows this syntax:

       int abs(int);
You put in a number, and it gets the absolute value of it


<h1 id = "run"> Running the file: </h1>

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

<h1 id = "credits">Credits</h1>

[Actiniumn404](https://github.com/actiniumn404) - Help with the str class, header gaurds, and print, toint, and tostring.

[Coderz75](https://github.com/coderz75) - Main bulk
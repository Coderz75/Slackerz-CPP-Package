# SLACKERZ!!!!!


This is a c++ package that makes c++ (much) easier

This project is licensed underneath the [MIT LICENSE](./slackerz/docs/LICENSE.md)

<b>THE GUIDE BELOW IS NOT COMPLETE!!</b>

Slackerz is very extensive, so it will taake a while to finish the guide.

# Table of Contents:

[Getting started](#start)

Packages:

1. [Default package](#default)
2. [Developer Package](#dev)
3. [Import Package](#import)
4. [Time Package](#time)

[Running the program](#run)

[Credits](#credits)



<h1 id = "start">Getting started</h1>

1. Navigate to this repository at https://github.com/Coderz75/Slackerz-Compiler

2. Click the code button and press download as zip

3. Extract the zip

The folder labled slackerz is the heart of the program, the rest is just a template. 

If your making a new cpp file, put this in the program:
```cpp
      #include "slackerz/default.h"
      using namespace slackerz;

      int main() {
      init_slackerz();
      //The rest of your code here
      }
```
GET CODING!

<h1 id = "default"> Default Package </h1>

The default package consists of many items. This package is required for slackerz, as many other functions rely on it

You can add the default package by putting
```cpp
      #include <slackerz/default.h>
```
At the start of your code

<h3>Init Slackerz</h3>

This functions follows the syntax of:
```cpp
    void init_slackerz(optional int)
```

to call it, just type ```init_slackerz(); ``` in your code

You may put a 1 or a 0 in the parenthesis, this controls the speed and working of the program. The default is 0. You may want to switch it to 1 depending if you are using sleep or clear functions. (more about that later.)

<h3>Print</h3>

This function is the heart of every python program. It follows this syntax:
```cpp
       void print(T a, ... ,  optional:: noend);
```

The T means that it can handle any type, from boolean to string.


for example, to print on a new line:
```cpp
      print("Hello");
```
And to print on the same line:
```cpp
      print("hello",noend);
```

also, print is very similar to python, so you can also concatinate via commas:
```cpp
      print("Hello",1,3,4,True,"Nice",noend)
      
```
<h3>Input</h3>

This is likely one of the most popular python functions. It follows this syntax: 

```cpp
      string input(optional: string);
```

Input returns a string, for example, I can do:
```cpp
       str l(input("Type in your name"));
       print(l);

```
And it will print out what I type into the console

<h3>Random</h3>
Youd don't need to do import random;

Just like python. Call it by:
```cpp
      random.randint(optional int max); //Random int, doesn't currently except a minimum
```

<h3>Absolute Value</h3>
This function gets the absolute value of an int. It follows this syntax:

```cpp
       int abs(int);
       

You use it by:

      abs(-4); // returns 4

```
You put in a number, and it gets the absolute value of it

<h3>Conversions:</h3>

Currently, slackerz only supports to int, to float and to string (more coming soon)

They follow this syntax:

```cpp
      int toint(U a);
      string tostring (T a);
      float tofloat(H a);
```
Any of these can transfer any (c++) datatype to the requested type 

<h3>Strings</h3>

Slackerz' string are different from typical strings, they follow this syntax:

```cpp
      str mystring("My string's value");
```
A known issue with slackerz strings is that sometimes you may get an error similar to "No operator matches this operation" If this happens, do [stringname].v as the value, for example:

```cpp
      if(mystring.v == "Hi"){ // works
            print("Hello!");
      }

      if(mystring == "Hi"){ // May give error 
            print("Hello!");
      }
```
<h4>String operations</h4>
You can call them by doing mystring.operation(); An example is

```cpp

      str Mystr("Hello");
      print(Mystr.lower());
```

Slackerz has many string operations. They are listed below:

Slackerz string operations are highly based on python operations, so you can search these python operations there

```cpp
                string upper(); //Converts a (slackerz) string to all uppercase

                string lower() //Converts a (slackerz) string to all lowercase

                std::vector<std::string>  split(string x = " "); //Splits a string into a VECTOR, not a c++ list. Big difference. (slackerz's list uses vectors to calculate types)

                string capitilize(); Capitlizes the first letter of a string

                bool isupper(); //checks if a string is uppercase

                bool islower(); //checks if a string is lowercase

                string convstr(); //converts the slackerz string into a c++ string

                string center(int s, optional: string a = " "); //Returns centered string

                string zfill(int length); Makes the string the desired length by filling it with zeros

                string swapcase(); //swaps the case of the string

                bool startswith(string a,optional: int b = 0,Optional: int c = 0); // Checks what does it start with
```

<h3>Lists</h3>

Lists are proven to work, but despite being put in the main branch, some functions and calls will be subject to change in later releases

Slackerz lists follows a somewhat similar syntax to it's string, but with a few differences.

Slackerz lists only allows one data type for a list

```cpp
      slackerz::list List({"Hello","List"}); //string lists
      slackerz::list Lisr2({3,5,6}); //integer lists
```

As with strings, sometime you may have to put List.v (string lists) or List.v2 (int lists) for it to work

```cpp
                void append(val); //appends lists with a value (one parameter) 

                void insert(int place, val);//Inserts a value in a place

                void extend(slackerz::list OR std::vector); // extend two lists together into the main one


                void pop(optional place);//deletes a value of the list

                void remove(val);// removes all instances of a certain value from a list
                void clear();//clears the list

                vector<string> copy(); //returns a copy of the list (but just following the v or v2 directions (mentioned above) will do the same thing).
                //Additional note, if you are using an int list, it would be best for you to put list.copy(1); to make sure u get the right list

                int count(val); //counts how many instances of a value occurs in a list

                int index(val); //Finds the index of the first item in the list that was entered

                void reverse(); //reverses the order of the list
```

<h1 id = "dev">Developer Package:</h1>

The dev package is pretty small. It gives developer tools that normal coders don't care about. Yuu can add it by putting: THis at the start of your code:

```cpp
      #include "slackerz/dev.h"
```
THE DEV PACKAGE DOES NOT INCLUDE THE DEFAULT PACKAGE, You must put the default package header from above to add it.

<h3>Turn off/on sync (beta)</h3>

You can turn on/off sync with studio (c package) by putting the 1 or 0 in the paranthesis of the init_slackerz() function, but incase you are not using that, you can use these functions

```cpp
      void turnOffSync(); //turns off sync (default with init_slackerz())
    
      void turnOnSync(); //turns on sync (default without init_slackerz())
```

<h1 id = "import">Import Package</h1>

The things in this package ARE NOT IN PYTHON. Just things that make lafe mcuh easier

Add this by doing: 

```cpp
      #include "slackerz/imports.h"
```
<h3>Clear</h3>

The clear function clears the console/teminal. This works on windows and linux. It may or may not work in MAC OS

When using this, it is reccomended to turn on sync, or to put init_slackerz(1); at the front of your code

Clear should work for most nixes, but on windows you need windows 10 or above

It follows this syntax:

```cpp
      void clear();
```
<h1 id = "time">Time</h1>

The time functions adds things for time

Add this by doing: 
```cpp
      #include "slackerz/time.h"
```

<h3>Sleep</h3>

Sleeps the program for a number of milliseconds.

When using this, it is reccomended to turn on sync, or to put init_slackerz(1); at the front of your code

It follows this syntax

```cpp
      void sleep(int millisecond);

Call it by:

      time.sleep(1000); //To sleep for one second

```
<h3>LocalTime</h3>

Gives the current time as a string. (for the native processor.) When using online compilers, it may give different times.

It follows this syntax

```cpp
      string localtime();

Call it by:

      time.localtime();

```

<h1 id = "run"> Running the file: </h1>



(This is the procedure on windows, linux should be similar though)

First, of course, you have to install a compiler, (for example [MSYS2](https://www.msys2.org/)) - follow the steps there

If you are using linux you likely already have a compiler installed, try checking by running:

      g++ --version
      gdb --version
      clang --version

If you get an error on all three of them, you need to install a compiler.

Make sure you added the directory to your path

Once your ready, open command prompt (or terminal for linux) and run these commands:

```sh
      cd [your file path]

      g++ -o [program name] [file your running]

      .\[program name]
```

for example, if you were to use the template:

```sh
      cd [Directory]

      g++ -o program main.cpp

      .\program
```

[This should do it on windows]

to search up your file's directory, right click the folder your file is in, and press copy as path. (or something similar to it) then paste it after the cd

<h1 id = "credits">Credits</h1>

[Actiniumn404](https://github.com/actiniumn404) - Help with the str class, header gaurds, and print, toint, and tostring.

[Coderz75](https://github.com/coderz75) - Main bulk
```
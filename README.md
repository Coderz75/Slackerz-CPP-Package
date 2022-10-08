# SLACKERZ!!!!!


This is a c++ package that makes c++ (much) easier

This project is licensed underneath the [MIT LICENSE](./slackerz/docs/LICENSE.md)


# Table of Contents:

[Why Slackerz?](#why)

[Pre-requisites](#prereq)

[Getting started](#start)


Packages:

1. [Default package](#default)
2. [Developer Package](#dev)
3. [Import Package](#import)
4. [Time Package](#time)

[Running the program](#run)

[Credits](#credits)



<h1 id = "why">Why slackerz?</h1>
Slackerz is built by Coderz75, with sign of stopping

Slackerz brings to you a plethora of functions, datatypes, and syntax fixes in c++ to make your life easied

Some features include:

1. Common python type functions, such as print(), input() and len()
2. Custom data types such as list and string
3. Simple and intuitive syntax

And so much more!


<h1 id = "prereq">Pre-requisites</h1>
Slackerz requires atleast c++11 or c++17, while preferably the latest version.

Slackerz has been tested on clang+, g++, and msvc, allowing for high compatibility

Slackerz is the most compatible on msvc and g++, but clang should work

<h1 id = "start">Getting started</h1>

Slackerz uses git for deployment, if you don't have it, you can download git at https://git-scm.com/

1. Simply, open the directory you want to install slackerz in
2. run the following command: 

```console
      git clone https://github.com/Coderz75/Slackerz-CPP-Package.git
```
3. Move the slackerz folder to you project
4. Now put this in your code:
```cpp
      #include "slackerz/slackerz.h"
```
5. Now, to import everything, just type this in:
```cpp
      #include s_all
```
6. GET CODING
<h1 id = "default"> Default Package </h1>

The default package consists of many items. This package is required for slackerz, as many other functions rely on it


<h3>Syntax stuff</h3>

Slackerz adds alot of syntax variants, but certain versions id dependent on the compiler

On ALL c++ compilers, slackerz offers a var syntax, which allows for the compiler to automatically decide the variable. For example"

```cpp
	var test = 2;
```
This will result in the data type being an int my default

Please note that the var defaults to standard library data types, so you won't be able to use slackerz's custom data types with this.

<br>
Slackerz also offers for ALL COMPILERS an auto return type for functions, fn. As stated below

```cpp
fn MyFn(){
	print("COol");
	return True;
}
```
This lovely fn variable won't work in main() though, as it results as an error

So this won't work
```cpp
fn maint(){
      print("Function") // DON'T TRY THIS!
}
```
<br>

Slackerz also feature for only MSVC (microsoft visual studio) definitions for or, and, and not, because for some reason they did not work well in the standard library (in my use cases atleast)

They will work as seen below:

```cpp
	if(5>2 and 3>1){
		print("Yep");
	}
	//result: Yep
 	if(5>2 or 3<1){
		print("Yep");
	}
	//result: Yep
 var a = " ";
  	if(a not " Hello"){
		print("Yep");
	}
	//result: Yep
```

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
      str mystring = "My string's value";
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

      str Mystr ="Hello";
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
                bool endswith(string suffix); // Returns if the string ends with a suffix :-)
```

<h3>Lists</h3>


Slackerz lists follows a somewhat similar syntax to it's string, but with a few differences.

Slackerz lists only allows one data type for a list

```cpp
      s::list<type> List ={value}; //string lists
      Ex:
      s::list<string> = {"Ok","Yeah"};
      s::list<int> = {3,4,64,};
```

As with strings, sometime you may have to put List.v (string lists) or List.v2 (int lists) for it to work

```cpp
                void append(val); //appends lists with a value (one parameter) 

                void insert(int place, val);//Inserts a value in a place

                void extend(slackerz::list OR std::vector); // extend two lists together into the main one


                void pop(optional place);//deletes a value of the list

                void remove(val);// removes all instances of a certain value from a list
                void clear();//clears the list

                vector<string> copy(); //returns a copy of the list (but just following the list.v (mentioned above) will do the same thing).

                int count(val); //counts how many instances of a value occurs in a list

                int index(val); //Finds the index of the first item in the list that was entered

                void reverse(); //reverses the order of the list
```

<h1 id = "dev">Developer Package:</h1>

The dev package is pretty small. It gives developer tools that normal coders don't care about.

THE DEV PACKAGE DOES NOT INCLUDE THE DEFAULT PACKAGE, You must put the default package header from above to add it.

<h3>Turn off/on sync (beta)</h3>

You can turn on/off sync with studio (c package) by putting the 1 or 0 in the paranthesis of the init_slackerz() function, but incase you are not using that, you can use these functions

```cpp
      void turnOffSync(); //turns off sync (default with init_slackerz())
    
      void turnOnSync(); //turns on sync (default without init_slackerz())
```

<h1 id = "import">Import Package</h1>

The things in this package ARE NOT IN PYTHON. Just things that make lafe mcuh easier

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
      void sleep(seconds);

Call it by:

      time.sleep(1.5); //To sleep for 1.5 seconds

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
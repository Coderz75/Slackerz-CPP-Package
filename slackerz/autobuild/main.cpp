#include "../slackerz/default.h"
#include "../slackerz/imports.h"
#include "../slackerz/time.h"
#include "../slackerz/dev.h"

int main(){
    init_slackerz();
    //testing print
    print("Hello","hi",123);
    print();
    //testing input
    str b = input("Hello: ");
    //random
    print(random.randint());
    print(abs(-4));
    //conversions
    tostring(2);
    tofloat("2");
    toint("3");
    //string functions
    b.lower();
    b.upper();
    b.split();
    b.capitilize();
    b.isupper();
    b.islower();
    b.convstr();
    b.center(10," ");
    b.zfill(20);
    b.swapcase();
    b.startswith("hello");
    b.endswith(":");
    //testing list
    s::list<string> x = {"Hello","Testing","123"};
    x.append("yeah");
    x.insert(1,"k");
    x.extend({"Ummm","yeah","k"});
    x.pop();
    x.count("Hello");
    x.index("Testing");
    x.reverse();
    x.copy();
    x.clear();
    //testing time
    s::time.sleep(1000);
    s::time.localtime();
    //testing imports
    clear();
}
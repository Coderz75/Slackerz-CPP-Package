#include "slackerz/default.h"

int main() {
    init_slackerz();
    print("Welcome to Slackerz!","yeah", 483);
    vector<string> a = {"yeah","imagine"};
    s::list<string> m  = {"Lol","cool"};
	m.append("right");
    m.insert(1,"xd");
    m.extend(a);
    s::list<string> k = {"wow"};
    m.extend(k);
    m.pop();
    m.pop(0);
    m.append("xd");
    m.remove("xd");
    m.clear();
    m = {"Welp","got deleted"};
    m.extend("Lol","cool");
	print(m);
    s::list<string> z = m.copy();
    m.extend(z);
    print(m);
    print(m.count("Welp"));
    print(m.index("Welp"),m.index("Lol"));
    s::list<string> l = {"Lol","cool","yeah","imagine"};
    print(l);
    l.reverse();
    print(l);
}   


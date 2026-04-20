#include <string>
#include <iostream>
#include "Developer.h"
#include "Publisher.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
class Game{
    private:
    string name;
    int release;
    Developer dev;
    Publisher pub;
    public:
    void setname(const string &n){name=n;};
    void setrelease(int r){release=r;};
    void setdev(string d){dev.setname(d);};
    void setpub(const string &p){pub.setname(p);};
    string getname(){return name;}
    int getrelease(){return release;}
    string getdev(){return dev.getname();}
    string getpub(){return pub.getname();}
    virtual void display()
;};
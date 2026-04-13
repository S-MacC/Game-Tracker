#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
class Game{
    private:
    string name;
    int release;
    string dev;
    string pub;
    public:
    void setname(const string &n){name=n;};
    void setrelease(int r){release=r;};
    void setdev(const string &d){dev=d;};
    void setpub(const string &p){pub=p;};
    string getname(){return name;}
    int getrelease(){return release;}
    string getdev(){return dev;}
    string getpub(){return pub;}
    virtual void display()
;};
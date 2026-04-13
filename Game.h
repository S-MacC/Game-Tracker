#include <string>
#include <iostream>
using std::string;

class Game{
    private:
    string name;
    int release;
    string dev;
    string pub;
    public:
    void setname(string n){n=name;}
    void setrelease(string r){r=release;}
    void setdev(string d){d=dev;}
    void setpub(string p){p=pub;}
    string getname(){return name;}
    int getrelease(){return release;}
    string getdev(){return dev;}
    string getpub(){return pub;}
    void display()
;};
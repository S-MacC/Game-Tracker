#ifndef _GAME_H_
#define _GAME_H_
#include <string>
#include <iostream>
#include "Developer.h"
#include <fstream>
#include "Publisher.h"
using std::string;
using std::ofstream;
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
    string getname() const {return name;}
    int getrelease(){return release;}
    string getdev(){return dev.getname();}
    string getpub(){return pub.getname();}
    string printpub(){return pub.getname()+","+std::to_string(pub.getemploy())+","+std::to_string(pub.getrev());};
    string printdev(){return dev.getname()+","+std::to_string(dev.getemploy())+","+std::to_string(dev.getrev());};
    virtual void display();
    void writedev(int a,float b){dev.setemploy(a);dev.setrev(b);};
    void writepub(int a,float b){pub.setemploy(a);pub.setrev(b);};
    void setdevrev(float a){dev.setrev(a);}
    void setpubrev(float a){pub.setrev(a);}
    void setdevemploy(int a){dev.setemploy(a);}
    void setpubemploy(int a){pub.setemploy(a);}
    void game();
};
#endif
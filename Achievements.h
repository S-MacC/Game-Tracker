#include "Game.h"
class Achievements{
private:
string name;
string desc;
bool completion;
public:
void setname(string n){n=name;}
void setdesc(string d){d=desc;}
void setcomp(bool c){c=completion;}
string getname(){return name;}
string getdesc(){return desc;}
bool getcomp(){return completion;}
void display(){}
};
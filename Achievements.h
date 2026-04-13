#ifndef GAME_H_
#define GAME_H_
class Achievements{
private:
string name;
string desc;
bool completion;
public:
void setname(const string &n){name=n;}
void setdesc(const string &d){desc=d;}
void setcomp(const bool &c){completion=c;}
string getname(){return name;}
string getdesc(){return desc;}
bool getcomp(){return completion;}
void display();
};
#endif
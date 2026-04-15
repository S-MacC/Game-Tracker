#include "Owned.h"
void Owned::setachieve(Achievements a1){
    achieve.push_back(a1);//need to add pointers
}
void Owned::display(){cout<<"Name: "<<getname()<<"\n"<<"Release Year: "<<getrelease()<<"\n"<<"Developer: "<<getdev()<<"\n"<<"Publisher: "<<getpub()<<"\n";}

void Owned::getachieve(){
    int total;
    int size;
    int percent;
    size=achieve.size();
    for(int i{};i<achieve.size();i++){
    achieve[i].display();
    bool foo;
    foo=achieve[i].getcomp();
    if(foo==true){
        total++;
    }
    }
    percent=(total/size)*100;
    cout<<"You are "<<percent<<" percent done with the game\n";
}
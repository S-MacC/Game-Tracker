#include "Owned.h"
void Owned::setachieve(Achievements a1){
    achieve.push_back(a1);//need to add pointers
}
void Owned::display(){cout<<"Name: "<<getname()<<"\n"<<"Release Year: "<<getrelease()<<"\n"<<"Developer: "<<getdev()<<"\n"<<"Publisher: "<<getpub()<<"\n";}
#include "Achievements.h"
#include <iostream>
#include <string>
void Achievements::display(){std::cout<<std::boolalpha<<"\nName: "<<name<<"\nDescription: "<<desc<<"\nCompleted: "<<completion<<std::endl;}

Achievements::Achievements()
{
}

Achievements::Achievements(string n, string d, bool c)
{
    setname(n);
    setdesc(d);
    setcomp(c);
}

#include "Game.h"
#include "Achievements.h"
int main(){
    Game g1;
    Achievements a1;
    g1.setname("mario");
    a1.setname("Save the star");
    std::cout<<g1.getname()<<std::endl;
    std::cout<<a1.getname()<<std::endl;

}
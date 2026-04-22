#include "Game.h"
#ifndef _DEVELOPER_
#define _DEVELOPER_
#ifndef _PUBLISHER_
#define _PUBLISHER_
void Game::display(){cout<<"Name: "<<name<<"\n"<<"Release Year"<<release<<"\n"<<"Developer"<<dev.getname()<<"\n"<<"Publisher"<<pub.getname()<<"\n";}

#endif
#endif
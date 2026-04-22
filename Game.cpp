#include "Game.h"
#ifndef _DEVELOPER_
#define _DEVELOPER_
#ifndef _PUBLISHER_
#define _PUBLISHER_
void Game::display(){cout<<"Name: "<<name<<"\n"<<"Release Year"<<release<<"\n"<<"Developer"<<dev.getname()<<"\n"<<"Publisher"<<pub.getname()<<"\n";}
void Game::game()
{
        string filename = getname() + ".txt";
    ofstream myfile(filename, std::ios::app);  // Append mode
    if (!myfile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    for(int i{};i<getname().size();i++){
        myfile << getname() <<"-- "<< getrelease() <<"-- "<<printdev() <<"-- " << printpub() << "\n";
    }
}
#endif
#endif
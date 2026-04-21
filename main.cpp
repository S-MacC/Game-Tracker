#include "Owned.h"
#ifndef _ACHIEVEMENTS_
#define _ACHIEVEMENTS_
#include "Wishlist.h"
#include <algorithm>
#include <windows.h>
#include <fstream>
using std::ofstream;
void call();
vector <Achievements>achieve;
vector<Owned>own;
vector<Wishlist>wish;
bool checkyear(Owned &a, Owned &b){
return a.getrelease() < b.getrelease();}
int main(){
    for(int x{};x<1;){
        cout<<"Welcome to the Game Tracker. How can we help you today \n";
        cout<<"Option 1: View all owned Games \n"<<"Option 2: Check Achievements\n"<<"Option 3: Filter Games\n"<<"Option 4: Browse Upcoming\n"<<"Option 5: Add Game\n";
        int choice{};
        cin>>choice;
        cin.ignore();
            if (choice==1){ 
                try{                                                            //exception handling for empty owned list
                    if(own.empty()){
                        throw "No games in owned list";
                    }
                    else{
                sort(own.begin(), own.end(), checkyear);
                for(int i{};i<own.size();i++){
                own[i].display();}
                }
            }
            catch(const char* msg){
                cout << msg << endl;
            }
        }

            else if(choice==2){                         
                try{                                                            //exception handling if game not found in owned list.
                cout<<"What Game would you like to check achievements for\n";
                string game;
                getline(cin,game);
                bool found = false;
                for(int i{}; i<own.size(); i++){
                    if(own[i].getname() == game){
                        found = true;
                        own[i].getachieve();
                        cout<<"\nWould you like to change, add or delete achievements\n";
                        string achoice;
                        cin>>achoice;
                        cin.ignore();
                        if(achoice=="change"){
                            cout<<"\nWhich achievements would you like to change\n";
                            int achange{};
                            cin>>achange;
                            cin.ignore();
                            cout<<"\nWhat would you like to change\n";
                            string wchange;
                            cin>>wchange;
                            cin.ignore();
                                if(wchange=="name"){
                                    cout<<"\nWhat name would you like to give it\n";
                                    string nname;
                                    std::getline(cin,nname);
                                    own[i].setachname(nname,achange);
                                }
                                else if(wchange=="description"){
                                cout<<"\nWhat description would you like to give it\n";
                                string ndesc;
                                std::getline(cin,ndesc);
                                own[i].setachdesc(ndesc,achange);  
                                }
                                else if(wchange=="completion"){
                                    cout<<"\nCongratulations on completing this achievement\n";
                                    own[i].setachcomp(achange);
                                }
                        }
                        else if(achoice=="add"){
                            Achievements atemp;
                            cout<<"\nWhat is the name of your new achievement\n";
                            string tname;
                            getline(cin,tname);
                            atemp.setname(tname);
                            cout<<"\nWhat is the description you would like to add to this achievement?\n";
                            string tdesc;
                            getline(cin,tdesc);
                            atemp.setdesc(tdesc);
                            own[i].setachieve(atemp);
                        }
                        else if(achoice=="delete"){
                            cout<<"\nWhich achievement do you want to delete\n";
                            int dchoice;
                            cin>>dchoice;
                            cin.ignore();
                            own[i].deleteachieve(dchoice);

                        }
                        else if(achoice=="n"){break;}
                        break;
                    }
                }
                if(!found){
                    throw "Game not found in owned list";
                }
            }
            
            catch(const char* msg){
                cout << msg << endl;
            }
        }

            else if(choice==3){
                cout<<"\nWhat would you like to filter by\n";
                string filter;
                cin>>filter;
                cin.ignore();
                if(filter=="developer"){
                cout<<"\nWhich Developer would you like to see";
                string dev;
                getline(cin,dev);
                string devel;
                for(int i{};i<own.size();i++){
                devel=own[i].getdev();
                if(devel==dev){own[i].display();};
                }   
                }
                else if(filter=="publisher"){
                cout<<"\nWhich Publisher would you like to see";
                string pub;
                getline(cin,pub);
                string publi;
                for(int i{};i<own.size();i++){
                publi=own[i].getpub();
                if(publi==pub){own[i].display();};
                }
                }
                else if(filter=="System"){
                    cout<<"\nDo you want console or PC\n";
                    string system;
                    getline(cin,system);
                    if(system=="console"){
                        cout<<"\nWhich console do you want\n";
                        string console;
                        getline(cin,console);
                    }
                    else if(system=="PC"){cout<<"\nHere is a list of all your PC games\n";}
                    else{cout<<"\nChoice not valid\n";}
                }
                else;
            }
            else if (choice==4){
                try{                                                            //exception handling for empty wishlist
                    if(wish.empty()){
                        throw "No games in wishlist";
                    }
                    else{
                for(int i{};i<wish.size();i++){
                wish[i].display();
                }
            }
        }
            catch(const char* msg){
                cout << msg << endl;
            }
    }
            else if (choice==5){
                cout<<"Is this a new purchase or a wishlist item?\n";
                string x;
                cin>>x;
                cin.ignore();
                try{ 
                    if(x=="new"){
                        cout<<"\nIs this title from your wishlist[y/n]\n";
                        string yn;
                        cin>>yn;
                        cin.ignore();
                        if(yn=="y"){
                            cout<<"\nWhat is the name of the game?\n";
                            string game;
                            int r;
                            string *gptr= &game;
                            int *rptr =&r;
                            cin>>*gptr;
                            cin>>*rptr;
                        }
                            else if(yn=="n"){
                    string title;
                    int rel;
                    string dev;
                    string publ;

                    cout<<"What is the title\n";
                    getline(cin,title);
                    cout<<"What is the release date\n";
                    cin>>rel;
                    cin.ignore();
                    cout<<"Who is the developer\n";
                    getline(cin,dev);
                    cout<<"Who is the publisher\n";
                    getline(cin,dev);
                    cout<<"What franchise is the game a part of\n";
                    Owned ownednew;
                    ownednew.setname(title);
                    ownednew.setrelease(rel);
                    ownednew.setdev(dev);
                    ownednew.setpub(publ);
                    Achievements a1;
                    Achievements a2;
                    a1.setname("Mario");
                    a2.setcomp(true);
                    ownednew.setachieve(a2);
                    ownednew.setachieve(a1);
                    own.push_back(ownednew);
                    own[0].achivments();
                    own[0].game();
                            }
                }
                else if(x=="wishlist"){
                    string title;
                    int rel;
                    string dev;
                    string publ;

                    cout<<"What is the title\n";
                    cin>>title;
                    cout<<"What is the release date\n";
                    cin>>rel;
                    cout<<"Who is the developer\n";
                    cin>>dev;
                    cout<<"Who is the publisher\n";
                    cin>>publ;
                    Wishlist wishednew;
                    wishednew.setname(title);
                    wishednew.setrelease(rel);
                    wishednew.setdev(dev);
                    wishednew.setpub(publ);
                    wish.push_back(wishednew);
                    }
                    else{
                        throw "Invalid choice";
                    }
                }
                catch(const char* msg){
                    cout << msg << endl;
                }
            }
            else if (choice==6){break;}
    }
}

#endif

#include "Owned.h"
#ifndef _ACHIEVEMENTS_
#define _ACHIEVEMENTS_
#include "Wishlist.h"
vector<Owned>own;
vector<Wishlist>wish;
int main(){
    for(int x{};x<1;){
        cout<<"Welcome to the Game Tracker. How can we help you today \n";
        cout<<"Option 1: View all owned Games \n"<<"Option 2: Check Achievements\n"<<"Option 3: Filter Games\n"<<"Option 4: Browse Upcoming\n"<<"Option 5: Add Game\n";
        int choice{};
        cin>>choice;
            if (choice==1){
                for(int i{};i<own.size();i++){
                own[i].display();
                }
            }
            else if(choice==2){
                cout<<"What Game would you like to check achievements for\n";
                string game;
                cin>>game;
                for(int i{};i<own.size();i++){
                string name;
                name=own[i].getname();
                if(name==game){own[i].getachieve();};
                }
            }
        
            
                
            
            else if(choice==3){
                cout<<"\nWhat would you like to filter by\n";
                string filter;
                cin>>filter;
                if(filter=="developer"){
                cout<<"\nWhich Developer would you like to see";
                string dev;
                cin>>dev;
                string devel;
                for(int i{};i<own.size();i++){
                devel=own[i].getdev();
                if(devel==dev){own[i].display();};
                }   
                }
                else if(filter=="publisher"){
                cout<<"\nWhich Publisher would you like to see";
                string pub;
                cin>>pub;
                string publi;
                for(int i{};i<own.size();i++){
                publi=own[i].getpub();
                if(publi==pub){own[i].display();};
                }
                }
                else if(filter=="System"){
                    cout<<"\nDo you want console or PC\n";
                    string system;
                    cin>>system;
                    if(system=="console"){
                        cout<<"\nWhich console do you want\n";
                        string console;
                        cin>>console;
                    }
                    else if(system=="PC"){cout<<"\nHere is a list of all your PC games\n";}
                    else{cout<<"\nChoice not valid\n";}
                }
                else;
            }
            else if (choice==4){
                for(int i{};i<wish.size();i++){
                wish[i].display();
                }
            }
            else if (choice==5){
                cout<<"Is this a new purchase or a wishlist item?\n";
                string x;
                cin>>x;//error checking here
                    if(x=="new"){
                        cout<<"\nIs this title from your wishlist[y/n]\n";
                        string yn;
                        cin>>yn;
                        if(yn=="y"){/*call copy constructor here*/}
                            else if(yn=="n"){
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
            else if (choice==6){x=1;}
    }
}
}
#endif
#include "Owned.h"
#ifndef _ACHIEVEMENTS_
#define _ACHIEVEMENTS_
#include "Wishlist.h"
#include <algorithm>
#include <windows.h>
#include <fstream>
using std::ofstream;
void call();
vector <Owned> load();
vector <Achievements>achieve;
vector<Owned>own;
vector<Wishlist>wish;
bool checkyear(Owned &a, Owned &b){
return a.getrelease() < b.getrelease();}
int main(){
    own=load();
    for(int x{};x<1;){
                for(int i{};i<own.size();i++){
                own[i].achivments();
            }
        cout<<"Welcome to the Game Tracker. How can we help you today \n";
        cout<<"Option 1: View all owned Games \n"<<"Option 2: Check Achievements\n"<<"Option 3: Filter Games\n"<<"Option 4: Browse Upcoming\n"<<"Option 5: Add Game\n"<<"Option 6: Edit Games\n"<<"Option 7: Quit\n";
        int choice{};
        cin>>choice;
        cin.ignore();
            if (choice==1){
                //load(); 
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
                achieve=own[0].Aload();
                own[0].AloadA(achieve);
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
                        }//Add find algorithm here
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
                    getline(cin,publ);
                    cout<<"What franchise is the game a part of\n";
                    float s{18.4};
                    Owned ownednew(title,rel,s);
                    ownednew.setname(title);
                    ownednew.setrelease(rel);
                    ownednew.setdev(dev);
                    ownednew.setpub(publ);
                    Achievements a1;
                    Achievements a2;
                    a1.setname("Mario");
                    a1.setcomp(true);
                    a1.setdesc("Complete the game");
                    
                    ownednew.setachieve(a1);
                    own.push_back(ownednew);
                    ownednew.game();
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
            else if (choice==6){cout<<"Which game would you like to edit\n";
            string egame;
            string newgame;
            getline(cin,egame);
                for(int i{};i<own.size();i++){
                newgame=own[i].getname();
                if(egame==newgame){
                    int perm{};
                    perm==i;
                    cout<<"What would you like to edit\n";
                    string edit;
                    cin>>edit;
                    cin.ignore();
                    if(edit=="name"){
                        cout<<"Current game name is "<<own[perm].getname()<<". What would you like to change it to";
                        string gname;
                        getline(cin,gname);
                        own[perm].setname(gname);
                    }
                    else if(edit=="release"){
                        cout<<"Current game name is "<<own[perm].getname()<<". What would you like to change it to\n";
                        int grelease;
                        cin>>grelease;
                        cin.ignore();
                        own[perm].setrelease(grelease);
                    }
                    else if(edit=="developer"){
                        cout<<"What would you like to change about the Developer "<<own[perm].getdev()<<"\n";
                        string cdev;
                        getline(cin,cdev);
                        if(cdev=="name"){cout<<"What would you like to change this to\n";
                        string namen;
                        getline(cin,namen);
                        own[perm].setdev(namen);
                        }
                        else if(cdev=="revenue"){
                            cout<<"What is the new revenue\n";
                            float revn;
                            cin>>revn;
                            cin.ignore();
                            own[perm].setdevrev(revn);
                        }
                        else if(cdev=="employees"){
                            cout<<"What is the new amount of employees\n";
                            int empln;
                            cin>>empln;
                            cin.ignore();
                            own[perm].setdevemploy(empln);
                        }
                    }
                    else if(edit=="publisher"){
                        cout<<"What would you like to change about the Publisher "<<own[perm].getpub()<<"\n";
                        string cpub;
                        getline(cin,cpub);
                        if(cpub=="name"){cout<<"What would you like to change this to\n";
                        string namen;
                        getline(cin,namen);
                        own[perm].setpub(namen);
                        }
                        else if(cpub=="revenue"){
                            cout<<"What is the new revenue\n";
                            float revn;
                            cin>>revn;
                            cin.ignore();
                            own[perm].setpubrev(revn);
                        }
                        else if(cpub=="employees"){
                            cout<<"What is the new amount of employees\n";
                            int empln;
                            cin>>empln;
                            cin.ignore();
                            own[perm].setpubemploy(empln);
                        }
                    }
                    else if(edit=="Time"){
                        cout<<"Current game name is "<<own[perm].getname()<<". What would you like to change it to\n";
                        float gtime;
                        cin>>gtime;
                        cin.ignore();
                        own[perm].settime(gtime);
                    }
                    else if(edit=="review"){
                        cout<<"Current game name is "<<own[perm].getname()<<". What would you like to change it to\n";
                        int greview;
                        cin>>greview;
                        cin.ignore();
                        own[perm].setreview(greview);
                    }
                    
                };
            }
        }
            else if(choice==7){break;}
    }
}

#endif
vector<Owned> load()
        {
            vector<Owned> artists;
            std::ifstream file("game.txt");
            
            if (!file.is_open())
            {
                //throw runtime_error("File not found or could not be opened.");
            }
            
            try
            {    
                string line;
                while (getline(file, line)) 
                {
                    size_t pos1 = line.find(',');
                    size_t pos2 = line.find(',', pos1 + 1);
                    size_t pos3 = line.find(',', pos2 + 1);
                    size_t pos4 = line.find(',', pos3 + 1);
                    size_t pos5 = line.find(',', pos4 + 1);
                    size_t pos6 = line.find(',', pos5 + 1);
                    size_t pos7 = line.find(',', pos6 + 1);
                    size_t pos8 = line.find(',', pos7 + 1);
                    size_t pos9 = line.find(',', pos8 + 1);
                    
                    string name = line.substr(0, pos1);
                    int release = std::stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
                    string devName = line.substr(pos2 + 1, pos3 - pos2 - 1);
                    int devEM = std::stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
                    float devrev = std::stof(line.substr(pos4 + 1, pos5 - pos4 - 1));
                    string pubName = line.substr(pos5 + 1, pos6 - pos5 - 1);
                    float pubRev = std::stof(line.substr(pos6 + 1, pos7 - pos6 - 1));
                    int pubEM = std::stoi(line.substr(pos7 + 1, pos8 - pos7 - 1));
                    float playtime = std::stof(line.substr(pos8 + 1, pos9 - pos8 - 1));
                    float review = std::stof(line.substr(pos9 + 1));



                    artists.push_back(Owned(name, release,  devName, devEM, pubName, pubEM, devrev,pubRev,playtime, review));
                }
                
                file.close();
                return artists;
            }
            catch (...)
            {
                cout << "Error reading from file." << endl;
                return {};
            }
        }
        
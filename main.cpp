#include "Owned.h"
#include "Achievements.h"
vector<Owned>own;
int main(){
cout<<"Welcome to the Game Tracker. How can we help you today \n";
cout<<"Option 1: View all owned Games \n"<<"Option 2: Check Achievements\n"<<"Option 3: Filter Games\n"<<"Option 4: Browse Upcoming\n"<<"Option 5: Add Game\n";
int choice{};
cin>>choice;
if (choice==1){
for(int i{};i==own.size();i++){
    
}
}
else if(choice==2){
cout<<"What Game would you like to check achievements for\n";
}
else if(choice==3){

}
else if (choice==4){

}
else if (choice==5){
cout<<"Is this a new purchase or a wishlist item?\n";
string x;
cin>>x;//error checking here
if(x=="new"){
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
    own.push_back(ownednew);
    
}
}
else{}

cout<<own.size();
}
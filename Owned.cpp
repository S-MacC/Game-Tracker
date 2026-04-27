#include "Owned.h"
Owned::Owned()
{
}
Owned::Owned(string n, int a)
{
    setname(n);
    review = a;
    

}
void Owned::setachieve(Achievements a1)
{
    if(achieve.size()<2){
        bool exists = false;
        for(int i{};i<achieve.size();i++){
            string n;
            string d;
    n=achieve[i].getname();
    d=achieve[i].getdesc();
    if(n==a1.getname() && d==a1.getdesc()){
        cout<<"Achievement already exists\n";
        exists = true;
        break;
    }
        }
        if(!exists){
            achieve.push_back(a1);//need to add pointers
        }
    }
    else{cout<<"No room\n";}
        

}
void Owned::display(){cout<<"Name: "<<getname()<<"\n"<<"Release Year: "<<getrelease()<<"\n"<<"Developer: "<<getdev()<<"\n"<<"Publisher: "<<getpub()<<"\n";}

void Owned::getachieve(){
    int total{};
    int size{};
    double percent{};
    size=achieve.size();
    for(int i{};i<achieve.size();i++){
        
    cout<<i<<endl;
    achieve[i].display();
    bool foo;
    foo=achieve[i].getcomp();
    if(foo==true){
        total++;
    }
    }
    percent=(double)total/size * 100;
        cout<<"You are "<<percent<<" percent done with the game\n";
}
void Owned::achivments(){
    string filename = getname() + "_A.txt";
    ofstream myfile(filename, std::ios::app);  // Append mode
    if (!myfile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    for(int i{};i<achieve.size();i++){
        myfile << achieve[i].getname() << ",";
        myfile << achieve[i].getdesc() << ",";
        myfile << achieve[i].getcomp() << endl;
    }
    myfile.close();
}
         vector<Achievements> Owned::Aload()
        {
            vector<Achievements> a ;
            string filename;
            filename = getname() + "_A.txt";
            std::ifstream file(filename);
            
            if (!file.is_open())
            {
                throw ("File not found or could not be opened.");
            }
            
            try
            {    
                string line;
                while (getline(file, line)) 
                {
                    size_t pos1 = line.find(',');
                    size_t pos2 = line.find(',', pos1 + 1);
                    
                    string name = line.substr(0, pos1);
                    string desc = line.substr(pos1 + 1, pos2 - pos1 - 1);
                    bool comp = stoi(line.substr(pos2 + 1));
                        
                    a.push_back(Achievements(name, desc, comp));
                }
                
                file.close();
                return a;
            }
            catch (...)
            {
                cout << "Error reading from file." << endl;
                return {};
            }
        }
        void Owned::game()
{
        string filename ="game.txt";
    ofstream myfile(filename, std::ios::app);  // Append mode
    if (!myfile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    
        myfile << getname() <<","<< getrelease() <<","<<printdev() <<"," << printpub() <<"," << review << ","<< time << endl;
    
}

Owned::Owned(string n, int a, string dev, int devem, string pub, int pubem, float devrev, float pubrev, float playtime, float review)
{
    setname(n);
    setrelease(a);
    setdev(dev);
    setpub(pub);
    setreview(review);
    settime(playtime);
    writedev(devem,devrev);
    writepub(pubem,pubrev);
}

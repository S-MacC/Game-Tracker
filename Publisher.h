#include <string>
using std::string;
class Publisher{
private:
string name;
int employ;
float rev;
public:
string getname(){return name;}
int getemploy(){return employ;}
float getrev(){return rev;}
void setname(const string &n){name=n;};
;};
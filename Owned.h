#include "Game.h"
#include "Achievements.h"
#include <vector>
using std::vector;
class Owned : public Game{
private:
vector<Achievements>achieve;//need to add pointers
int review;
float time;
public:
Owned();
Owned(string,int);
void setachieve(Achievements a1);
void setreview(const int &n){review=n;};
void settime(const float &n){time=n;};
void getachieve();
void display();
void setachname(const string &n,int i){achieve[i].setname(n);};
void setachdesc(const string &n,int i){achieve[i].setdesc(n);};
void setachcomp(int i){achieve[i].setcomp(true);};
void deleteachieve(int i){achieve.erase(achieve.begin()+i);}
void achivments();
void saveAllAchievements(const vector<Owned>& owned);
vector<Achievements> Aload();
void AloadA(vector<Achievements> a){achieve=a;}
void game();
Owned(string n, int a, string dev, int devem, string pub, int pubem, float devrev, float pubrev, float playtime, float review);
int getachievementCount() { return achieve.size(); }
vector<Achievements> getachievements() { return achieve; }
};
#include "Game.h"
#include "Achievements.h"
#include <vector>
using std::vector;
class Owned : public Game{
private:
vector<Achievements>achieve;//need to add pointers
int review;
int players;
float time;
public:
void setachieve(Achievements a1);
void getachieve(){std::cout<< achieve.size();}
void display();
};

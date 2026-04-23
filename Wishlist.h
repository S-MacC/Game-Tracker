#ifndef _GAME_
#define _GAME_
#include <string>
#include <iostream>
#include <fstream>
using std::string;
class Wishlist : public Game{
private:
int nopre;
string preorder;
float price;
public:
void wishlist();
};
#endif
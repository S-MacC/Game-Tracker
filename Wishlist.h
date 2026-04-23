#ifndef _WISHLIST_
#define _WISHLIST_
#include <string>
#include <iostream>
#include <fstream>
#include "Game.h"
using std::string;
class Wishlist : public Game{
private:
int nopre;
string preorder;
float price;
public:
void wishlist();

void setnopre(const int &n){nopre=n;};
void setpreorder(const string &n){preorder=n;};
void setprice(const float &n){price=n;};
Wishlist(string n, int a, string dev, int devem, string pub, int pubem, float devrev, float pubrev, int nopre, string preorder, float price);
Wishlist();
};
#endif
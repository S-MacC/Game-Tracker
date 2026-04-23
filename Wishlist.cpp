#include "Wishlist.h"

void Wishlist::wishlist()
{
         std::string filename ="wishlist.txt";
    std::ofstream myfile(filename, std::ios::app);  // Append mode
    if (!myfile.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }
    
        myfile << getname() <<","<< getrelease() <<","<<printdev() <<"," << printpub() <<","<<nopre << ","<<preorder <<","<<price <<std::endl;
    myfile.close();
       
}

Wishlist::Wishlist(string n, int a, string dev, int devem, string pub, int pubem, float devrev, float pubrev, int nopre, string preorder, float price)
{
    setname(n);
    setrelease(a);
    setdev(dev);
    setpub(pub);
    setnopre(nopre);
    setpreorder(preorder);
    setprice(price);

}

Wishlist::Wishlist()
{
}

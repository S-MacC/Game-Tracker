#include "Wishlist.h"

void Wishlist::wishlist()
{
         std::string filename ="wishlist.txt";
    std::ofstream myfile(filename, std::ios::app);  // Append mode
    if (!myfile.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return;
    }
    
        myfile << getname() <<","<< getrelease() <<","<<printdev() <<"," << printpub() <<","<< std::endl;
    myfile.close();
       
}
/*#include <gtest/gtest.h>
#include "Owned.h"
#include "Achievements.h"
#include <iostream>
using std::cout;
using std::endl;

TEST(SongTest, Test1) {
Owned own3;
Achievements own("Achievement Name", "Achievement Description", true);
Achievements own2("Ach name","ach desc",false);
own3.setachieve(own);
own3.setachieve(own2);
vector<Achievements> achs=own3.getachievements();
EXPECT_EQ(achs[0].getname(),"Achievement Name");
EXPECT_EQ(achs[1].getname(),"Ach name");

}
TEST(SongTest, Test2) {
Owned own3;
Achievements own("Achievement Name", "Achievement Description", true);
Achievements own2("Ach name","ach desc",false);
Achievements own4("Achi name","ncaeo",true);
own3.setachieve(own);
own3.setachieve(own2);
own3.setachieve(own4);
EXPECT_EQ(own3.getachievementCount(), 2);
vector<Achievements> achs=own3.getachievements();
EXPECT_EQ(achs[0].getname(),"Achievement Name");
EXPECT_EQ(achs[1].getname(),"Ach name");
}
TEST(SongTest, Test3) {
Owned own3;
Achievements ach("Achievement Name", "Achievement Description", true);
own3.setachieve(ach);
own3.setachieve(ach);
EXPECT_EQ(own3.getachievementCount(),1);
}

int main(int argc, char **argv) {
    cout << "Starting tests..." << endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/

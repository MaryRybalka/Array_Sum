#include "gtest/gtest.h"
#include "Lib.h"

TEST(array_sum, CheckOneElementArr){
    int u = 5;
    EXPECT_EQ(5,array_sum(&u,1));
}

TEST(array_sum, CheckSomePositiveEiementsArr){
    int *u = new int[4];
    for (int i = 0; i<4; i++){
        *(u + i) = i+1;
    }
    EXPECT_EQ(10,array_sum(u,4));
}

TEST(array_sum, CheckSomeNegativeEiementsArr){
    int *u = new int[4];
    for (int i = 0; i<4; i++){
        *(u + i) = -i-1;
    }
    EXPECT_EQ(-10,array_sum(u,4));
}
TEST(array_sum, CheckZeroArr){
    int *u = new int[4];
    for (int i = 0; i<4; i++){
        *(u + i) = 0;
    }
    EXPECT_EQ(0,array_sum(u,4));
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
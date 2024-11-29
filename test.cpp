#include <gtest/gtest.h>
#include "common.h"

/**
    *! use some test cases for better output understanding
*/


TEST(Test1, HandlesPositiveInput) {
    EXPECT_EQ(sum(1, 2, 3), 6);
    EXPECT_EQ(sum(10, 20, 40), 70);
}

TEST(Test2, HandlesNegativeInput) {
    EXPECT_EQ(sum(-1, -2, -3), -6);
    EXPECT_EQ(sum(-10, 20, -10), 0);
}

int main(int argc, char **argv) 
 {
    printf("Test");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 
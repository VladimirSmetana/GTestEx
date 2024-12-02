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

TEST(Dev1, HandlesPositiveInput) {
    double res = 0;
    ASSERT_EQ(dev(1, 2, &res), 0);
    ASSERT_DOUBLE_EQ(res, 0.5);

    ASSERT_EQ(dev(10, -5, &res), 0);
    ASSERT_DOUBLE_EQ(res, -2.0);
}

TEST(Dev2, HandlesNegativeInput) {
    double res = 0;
    ASSERT_EQ(dev(-1, 0, &res), -1);
    ASSERT_DOUBLE_EQ(res, 0);

    ASSERT_EQ(dev(6, 0, &res), -1);
    ASSERT_DOUBLE_EQ(res, 0);
}


TEST(VEC, HandlesMerging) {
    std::vector<int> first = {1,2,3};
    std::vector<int> second = {1,2,4};
    std::vector<int> result = {1,2,3,1,2,4};

    ASSERT_EQ(vec_merg(first, second), result);
}

TEST(VEC0, HandlesMerging) {
    std::vector<int> first = {};
    std::vector<int> second = {};
    std::vector<int> result = {};

    ASSERT_EQ(vec_merg(first, second), result);
}

int main(int argc, char **argv) 
 {
    printf("Test");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 
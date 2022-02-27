#include <gtest/gtest.h>
#include "header.h"

TEST(solutionTest, smallTest)
{
    std::vector<int> v1 {1, 4, 5, 8};
    std::vector<int> v2 {4, 5, 9, 10};
    std::vector<int> v3 {4, 6, 7, 10, 2};

    EXPECT_EQ(solution(v1, v2, v3), 4);

    std::vector<int> v4 {1};
    std::vector<int> v5 {2};
    std::vector<int> v6 {2};
    EXPECT_EQ(solution(v4, v5, v6), 1);
}

int main (int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
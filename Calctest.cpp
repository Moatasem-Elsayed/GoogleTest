#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Calc.hpp"
TEST(SumFunction, Test_1)
{
    EXPECT_EQ(5, sum(2, 3));
}
TEST(SumFunction, Test_2)
{
    EXPECT_NE(5, sum(12, 3));
}
TEST(SubFunction, Test_1)
{
    EXPECT_EQ(-1, sub(2, 3));
}
TEST(SubFunction, Test_2)
{
    EXPECT_NE(8, sum(12, 3));
}
const char *fun()
{

    return "hello";
}
TEST(moatasem, test_1)
{
    std::string s = "hello";
    EXPECT_STREQ(fun(), s.c_str());
}
int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

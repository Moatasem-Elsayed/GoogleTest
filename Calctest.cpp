#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Calc.hpp"

class StudentTest : public testing::Test
{
    Student s1;

public:
    // Sets up the test fixture.
    void SetUp() override
    {
        s1.score = 100;
        s1.name = "moatasem";
    }
    // Tears down the test fixture.
    void TearDown() override
    {
    }
};
TEST_F(StudentTest, Test_1)
{
    EXPECT_TRUE(s1.DisplayResult());
}
TEST_F(StudentTest, Test_2)
{
    s1.score = 20;
    EXPECT_FALSE(s1.DisplayResult());
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

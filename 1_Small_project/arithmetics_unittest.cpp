#include "gtest/gtest.h"
#include "arithmetics.h"

TEST(ArithmeticsTest, SquareTest)
{
    EXPECT_EQ(100, takeSquare(10));	
}

#include "gtest/gtest.h"
#include "arithmetics.h"

//Here we just test a function
TEST(ArithmeticsTest, SquareTest)
{
    EXPECT_EQ(100, takeSquare(10));	
}

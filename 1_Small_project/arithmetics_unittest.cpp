#include "gtest/gtest.h"
#include "arithmetics.h"

//Here we just test a function
TEST(TakeSquareTest, SquareTest)
{
    EXPECT_EQ(100, TakeSquare(10));	
}

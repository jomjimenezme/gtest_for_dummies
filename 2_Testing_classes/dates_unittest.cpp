#include "gtest/gtest.h"
#include "dates.h"



// Tests the default constructor
TEST(Dates, DefaultConstructor)
{
    Date d1;
    
    EXPECT_EQ(1970, d1.getYear());
    EXPECT_EQ(1, d1.getMonth());
    EXPECT_EQ(1, d1.getDay());

}


// Tests the explicit constructor




// Tests the copy constructor



// Tests the method isLeapYear


// Tests the method setDate



// Tests the method checkDate




// Tests the method incDay

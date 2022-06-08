/*--------------------TESTING A CLASS--------------------------------
  Here we will be in a more realistic situation, we´ll test one of
	our classes.

	Syntax:	 
     - Class Name: 			Foo
     - Test Suite name: TestFoo
		 - Test name: 			Bar
  
	So, to write a test, one should write:
    TEST(TestFoo, Bar)
--------------------------------------------------------------------*/



#include "gtest/gtest.h"
#include "dates.h"




/* Tests the default constructor*/
TEST(TestDate, DefaultConstructor)
{
    Date d1;
    
    EXPECT_EQ(1970, d1.getYear());
    EXPECT_EQ(1, d1.getMonth());
    EXPECT_EQ(1, d1.getDay());
    EXPECT_EQ(1, isLeapYear(2020));

}


// Tests the explicit constructor




// Tests the copy constructor



// Tests the method isLeapYear


// Tests the method setDate



// Tests the method checkDate




// Tests the method incDay

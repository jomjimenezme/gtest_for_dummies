//Author: Jose M Jimenez M

/* Now we´ll use the "FIXTURE" feature of google test.
   In a nutshell:
    - If you have many simmilar tests, you do not want to duplicate the code
      for the commmon set-up phase. (Innitialization of data, e.g, objects of a class).

    - This allows to have objects and functions used by all the tests in a test Case.  

    - The idea is to avoid duplication of the code necessary to create and destruct the
      objects shared between tests.  One can also define sub-routines called by tests .

    - IMPORTANT: The tests share code, not data, i.e. Each test gets a copy of the fixture.
      So, data modified by one tests does not affect data of other tests.  
      This is because -tests must be independent and repeatable-.
    - SUMMARY: A test Fixture is a class cointainning the common setup-code for a group of tests.
*/

#include "gtest/gtest.h"
#include "dates.h"



// To use a test fixture, derive a class from testing::Test:
class DateTest : public testing::Test {
 /*You should make the members protected s.t. they can be
   accessed from sub-classes: */
  protected:    
    /*To initialize the variables, use virtual void SetUp(), it
      will be called before EACH test is run.*/
    void SetUp() override {
      d_leap.setDate(28, 02, 2020); //This is a Leap year.
      d_not_leap.setDate(28, 02, 2021); //This is not Leap year.
    }


  /* virtual void TearDown() will be called AFTER each test is run.
     Use it when the destructor of the class is not enough
   
    virtual void TearDown() {
   }*/


		// In Fixtures one can include functions that tests uses 
		void incYear(Date& d){
			for(int i=1; i<=365; i++)
				d.incDay();
    //one could even make assertions here!!!!
		}

    
    Date d_leap;
    Date d_not_leap;
  
  };





// Test for the isLeapYear method. See why it should be in other class?
TEST_F(DateTest, testIsLeapYear)	
{
    EXPECT_EQ( 1, d_leap.isLeapYear(d_leap.getYear() )  );
    EXPECT_EQ( 0, d_leap.isLeapYear(d_not_leap.getYear() )  );

}


// Test for the incDay method.
//TODO: why does this test fail?
TEST_F(DateTest, testIncDay)
{
    EXPECT_EQ( 28, d_leap.getDay() );
    d_leap.incDay();
    EXPECT_EQ( 29, d_leap.getDay() );

    EXPECT_EQ( 28, d_not_leap.getDay() );
    d_not_leap.incDay();
    EXPECT_EQ( 29, d_not_leap.getDay() );


}


// Using the helper function
TEST_F(DateTest, testIncYear)
{

    incYear(d_leap);
    EXPECT_EQ( 27, d_leap.getDay() );

    incYear(d_not_leap);
    EXPECT_EQ( 28, d_not_leap.getDay() );


}


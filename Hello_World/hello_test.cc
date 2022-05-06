#include <gtest/gtest.h>

//TEST SUITE == Group of related tests.
//TEST CASE == Just a test.
//A test is made of ASSERTIONS and it will fail if ONE ASSERTION fails.


//1
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect equality.
  EXPECT_EQ(7 * 6, 42); 
  // Expect INequality.
  EXPECT_NE(7 * 6, 4234); 
  
}


//2
//We use only "Expect" assertions
TEST(HelloTest, UseOnlyExpect){
  // Expect equality TO FAIL---> Non Fatal
  EXPECT_EQ(7 * 6, 23423) ;
  EXPECT_EQ(7 * 6, 42);
  EXPECT_EQ(7 * 6, 23423) ;

}
  
  
 
  
//3
//We use also "ASSERT" assertions:
TEST(HelloTest, UseOneAssertion){
  // Expect equality to FAIL----> Fatal
  ASSERT_EQ(7 * 6, 23423)<< "Product operation not working" ;

  EXPECT_EQ(7 * 6, 4234);
    
}


/*

//4
//String Assertions
TEST(HelloTest, TestStrings){
 // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
}



*/

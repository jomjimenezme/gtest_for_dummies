#include <gtest/gtest.h>


//------------------------- 0 ----------------------------
//  Some Basic definitions
//  TEST CASE == Just a test.
//  TEST SUITE == Group of related tests.
//  A test is made of ASSERTIONS and it will fail if ONE ASSERTION fails.
//--------------------------------------------------------


//------------------------- 1 ----------------------------
// Here we Demonstrate some basic assertions.
// This is how a test should look like (including naming)
//  TEST(TestSuiteName, TestName) {
//    ... test body ...
//  }
//--------------------------------------------------------
TEST(HelloTest, BasicAssertions) {
  // Expect equality.
  EXPECT_EQ(7 * 6, 42); 
  // Expect Inequality.
  EXPECT_NE(7 * 6, 4234); 
  
}


/*

//------------------------- 2 ----------------------------
//  Here We use only "EXPECT" assertions
//  and we expect two of them to fail.
//  If an EXPECT assertion fails, the tests continues
//--------------------------------------------------------

TEST(HelloTest, UseOnlyExpect){
  // Expect equality TO FAIL---> Non Fatal
  EXPECT_EQ(7 * 6, 23423) ;  

  EXPECT_EQ(7 * 6, 42);
  EXPECT_EQ(7 * 6, 23423) << "Second time it fails"; // Costume message

}
  
  
 
  
///------------------------- 3 ----------------------------
//  Here We use also "ASSERT" assertions:
//  If an ASSERT assertion fails, the tests continues
//--------------------------------------------------------

TEST(HelloTest, UseOneAssertion){
  // Expect equality to FAIL----> Fatal
  ASSERT_EQ(7 * 6, 23423)<< "Product operation not working" ;

  EXPECT_EQ(7 * 6, 4234);
    
}




///------------------------- 4 ----------------------------
//  Play around with gooogle assertions:
//  See https://google.github.io/googletest/reference/assertions.html
//--------------------------------------------------------

//  String Assertions
TEST(HelloTest, TestStrings){
 // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
}


//Rounding errors make unlikely that two floating-point values match exactly, so EXPECT_EQ fails.
//  Testing Double Values
TEST(HelloTest, TestDoubles){

 // Verifies that the two double values val1 and val2 are approximately equal,
 // to within 4 ULPs from each other.
  EXPECT_DOUBLE_EQ(val1,val2)
  ASSERT_DOUBLE_EQ(val1,val2)
}






*/

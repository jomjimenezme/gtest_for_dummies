//Author: Jose M Jimenez M

// Now we´ll use the "Fixture" feature of google test.
//
// A test fixture permits to have objects and functions used by all the tests in a test Case.  
// The idea is to avoid duplication of the code necessary to create and destruct the
// objects shared between tests.  One can also define sub-routines called by tests .



//TODO: Understand and exemplarize this:
//"
// The tests share the test fixture in the sense of code sharing, not
// data sharing.  Each test is given its own fresh copy of the
// fixture.  You cannot expect the data modified by one test to be
// passed on to another test, which is a bad idea.
//
// The reason for this design is that tests should be independent and
// repeatable.  In particular, a test should not fail as the result of
// another test's failure.  If one test depends on info produced by
// another test, then the two tests should really be one big test.
//
// The macros for indicating the success/failure of a test
// (EXPECT_TRUE, FAIL, etc) need to know what the current test is
// (when Google Test prints the test result, it tells you which test
// each failure belongs to).  Technically, these macros invoke a
// member function of the Test class.  Therefore, you cannot use them
// in a global function.  That's why you should put test sub-routines
// in a test fixture.
// "


#include "gtest/gtest.h"
#include "dates.h"






// To use a test fixture, derive a class from testing::Test.
class DateTest : public testing::Test {
 protected:  
 // You should make the members protected s.t. they can be
 // accessed from sub-classes.
 
 
  // virtual void SetUp() will be called before each test is run.  You
  // should define it if you need to initialize the variables.
  // Otherwise, this can be skipped.
  void SetUp() override {
    q1_.Enqueue(1);
    q2_.Enqueue(2);
    q2_.Enqueue(3);
  }

  // virtual void TearDown() will be called after each test is run.
  // You should define it if there is cleanup work to do.  Otherwise,
  // you don't have to provide it.
  //
  // virtual void TearDown() {
  // }

  // A helper function that some test uses.
  static int Double(int n) { return 2 * n; }

  // A helper function for testing Queue::Map().
  void MapTester(const Queue<int>* q) {
    // Creates a new queue, where each element is twice as big as the
    // corresponding one in q.
    const Queue<int>* const new_q = q->Map(Double);

    // Verifies that the new queue has the same size as q.
    ASSERT_EQ(q->Size(), new_q->Size());

    // Verifies the relationship between the elements of the two queues.
    for (const QueueNode<int>*n1 = q->Head(), *n2 = new_q->Head();
         n1 != nullptr; n1 = n1->next(), n2 = n2->next()) {
      EXPECT_EQ(2 * n1->element(), n2->element());
    }

    delete new_q;
  }

  // Declares the variables your tests want to use.
  Queue<int> q0_;
  Queue<int> q1_;
  Queue<int> q2_;
};








// Tests the default constructor
TEST(Dates, DefaultConstructor)
{
    Date d1;
    
    EXPECT_EQ(1970, d1.getYear());
    EXPECT_EQ(1, d1.getMonth());
    EXPECT_EQ(1, d1.getDay());

}



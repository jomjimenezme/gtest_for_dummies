add_test( testMath.myCubeTest /home/jimenez/Google_test/Simple_project/build/arithmetics [==[--gtest_filter=testMath.myCubeTest]==] --gtest_also_run_disabled_tests)
set_tests_properties( testMath.myCubeTest PROPERTIES WORKING_DIRECTORY /home/jimenez/Google_test/Simple_project/build)
set( arithmetics_TESTS testMath.myCubeTest)

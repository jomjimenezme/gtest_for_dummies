**Author**: Jose M Jimenez M



This is a repo made to learn the basics of  Google C++ testing framework.

The diectories are numbered in increasing compelxity order.

To Build, Run and Clean, simply run the scripts:
./Build.sh
./Run_test.sh or ./Verbose
./Clean



To **Build and Run MANUALLY** follow this three steps.
1	
	cmake -S . -B build

2	
	cmake --build build

3 **Run** tests:	
	cd build && ctest       or    cd build && ctest -V


To rebuild:  
	rm -r build/  
and repeat steps 1 and 2.



all: clean real gtest

real: main.cpp 
	clang++ -std=c++17 -Wall -o real main.cpp 
gtest: test.cpp
	clang++ -std=c++17 -Wall -o gtest test.cpp -lgtest -lgtest_main -lpthread
	
clean:
	rm -f real gtest *.o
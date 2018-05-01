CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: math_utils.o test

clean:
	rm math_utils.o test

test: math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp math_utils.o -o test

math_utils.o: math_utils.cpp
	$(CXX) $(CXXFLAGS) -c math_utils.cpp

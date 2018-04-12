CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: math_utils.o

clean:
	rm math_utils.o

math_utils.o: math_utils.cpp
	$(CXX) $(CXXFLAGS) -c math_utils.cpp

CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: pe14

clean:
	rm math_utils.o math_utils

board: math_utils.o
	$(CXX) $(CXXFLAGS) math_utils.cpp pe14.o -o math_utils

pe14.o: math_utils.cpp
	$(CXX) $(CXXFLAGS) -c math_utils.cpp

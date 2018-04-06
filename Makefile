CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: pe14

clean:
	rm math_utils.o math_utils

board: math_utils.o
	$(CXX) $(CXXFLAGS) math_utils.cc pe14.o -o math_utils

pe14.o: math_utils.cc
	$(CXX) $(CXXFLAGS) -c math_utils.cc

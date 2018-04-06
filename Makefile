CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: pe14

clean:
	rm pe14.o pe14

board: pe14.o
	$(CXX) $(CXXFLAGS) main.cc pe14.o -o pe14

pe14.o: pe14.cc
	$(CXX) $(CXXFLAGS) -c pe14.cc

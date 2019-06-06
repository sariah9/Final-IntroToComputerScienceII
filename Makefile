CXX=g++
CXXFLAGS = -Wall -g -std=c++11

output: main.o Space.o Mountain.o Forest.o Coast.o Knapsack.o Board.o Menu.o
	$(CXX) $(CXXFLAGS) -o output main.o Space.o Mountain.o Forest.o Coast.o Knapsack.o Board.o Menu.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Space.o: Space.hpp Space.cpp
	$(CXX) $(CXXFLAGS) -c Space.cpp

Mountain.o: Mountain.hpp Mountain.cpp
	$(CXX) $(CXXFLAGS) -c Mountain.cpp

Forest.o: Forest.hpp Forest.cpp
	$(CXX) $(CXXFLAGS) -c Forest.cpp

Coast.o: Coast.hpp Coast.cpp
	$(CXX) $(CXXFLAGS) -c Coast.cpp

Board.o: Board.hpp Board.cpp
	$(CXX) $(CXXFLAGS) -c Board.cpp

Knapsack.o: Knapsack.cpp
	$(CXX) $(CXXFLAGS) -c Knapsack.cpp

Menu.o: Menu.hpp Menu.cpp
	$(CXX) $(CXXFLAGS) -c Menu.cpp
	
clean:
	rm *.o output

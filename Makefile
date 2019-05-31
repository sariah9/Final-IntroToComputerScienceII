CPPFLAGS=-Wall
vpath %.cpp src
vpath %.hpp src

output: main.o Space.o Mountain.o Forest.o Coast.o Board.o Menu.o   
	g++ -std=c++11 main.o Space.o Mountain.o Forest.o Coast.o Board.o Menu.o -o output

Space.o: Space.hpp Space.cpp
	g++ -c Space.cpp

Mountain.o: Mountain.hpp Mountain.cpp
	g++ -c Mountain.cpp

Forest.o: Forest.hpp Forest.cpp
	g++ -c Forest.cpp

Coast.o: Coast.hpp Coast.cpp
	g++ -c Coast.cpp

Board.o: Board.hpp Board.cpp
	g++ -c Board.cpp

Menu.o: Menu.hpp Menu.cpp
	g++ -c Menu.cpp

main.o: main.cpp
	g++ -c main.cpp
	
clean:
	rm *.o output

CC = g++

default: main.o Maze.o Solver.o
	$(CC) -o main.out main.o Maze.o Solver.o
	./main.out

solver1: clean
	rm Solver.h
	rm Solver.cpp
	ln -s Solver1.cpp Solver.cpp
	ln -s Solver1.h Solver.h

solver2: clean
	rm Solver.h
	rm Solver.cpp
	ln -s Solver2.cpp Solver.cpp
	ln -s Solver2.h Solver.h

solver3: clean
	rm Solver.h
	rm Solver.cpp
	ln -s Solver3.cpp Solver.cpp
	ln -s Solver3.h Solver.h

main.o: main.cpp Maze.h
	$(CC) -c -O2 main.cpp

Maze.o: Maze.cpp Maze.h
	$(CC) -c -O2 Maze.cpp

Solver.o: Solver.cpp Solver.h
	$(CC) -c -O2 Solver.cpp

clean: 
	rm main.out main.o Maze.o Solver.o

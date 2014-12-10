CC = g++

default: main.o Maze.o
	$(CC) -o main.out main.o Maze.o
	./main.out

main.o: main.cpp Maze.h
	$(CC) -c main.cpp

Maze.o: Maze.cpp Maze.h
	$(CC) -c Maze.cpp

clean: 
	rm main.out main.o Maze.o

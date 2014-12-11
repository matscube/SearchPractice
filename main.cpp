#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>

#include "Maze.h"
#include "Solver.h"

using namespace std;

int main() {
//	Maze maze("maze.txt");
	Maze maze("maze55.txt");
//	maze.showField();
	vector<string> field = maze.getField();

	SolverTest solverTest;
	solverTest.init(field);

	clock_t start = clock();
	for (int i = 0; i < 100000; i++) {
		solverTest.bfs(0, 0, 54, 54);
	}

	long long t = clock() - start;
	cout << double(t) / 1000000 << endl;


  return 0;
}
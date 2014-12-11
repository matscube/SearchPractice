#ifndef INCLUDED_MAZE
#define INCLUDED_MAZE

#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

class Maze {
private:
	int N;
	vector<string> field;

public:
	Maze(string file_name);
	int getSize();
	vector<string> getField();
	void showField();
};
#endif
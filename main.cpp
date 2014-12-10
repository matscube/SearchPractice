#include <iostream>
#include <fstream>
#include <vector>
#include "Maze.h"

using namespace std;

int main() {
	Maze m("maze.txt");
	cout << m.getSize() << endl;
	m.showField();

    cout << 1 << endl;
    return 0;
}
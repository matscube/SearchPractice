#include "Maze.h"

Maze::Maze(string file_name) {
	ifstream ifs(file_name);
	ifs >> N;
	for (int i = 0; i < N; i++) {
		string s; ifs >> s;
		field.push_back(s);
	}
}

int Maze::getSize() {
	cout << "N: " << N << endl;
	return N;
}

void Maze::showField() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}

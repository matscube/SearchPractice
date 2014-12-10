#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Maze {
private:
	int N;
	vector<string> field;

public:
	Maze(string file_name) {
		ifstream ifs(file_name);
		ifs >> N;
		for (int i = 0; i < N; i++) {
			string s; ifs >> s;
			field.push_back(s);
		}
	}
	int getSize() {
		return N;
	}
	void showField() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << field[i][j];
			}
			cout << endl;
		}
	}
};

int main() {
	Maze m("maze.txt");
	cout << m.getSize() << endl;
	m.showField();

    cout << 1 << endl;
    return 0;
}
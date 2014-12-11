#ifndef INCLUDED_SOLVER
#define INCLUDED_SOLVER

#include <vector>
#include <iostream>
#include <queue>

#define X(x) ((x) & 63)                 // Unpacking
#define Y(x) ((x) >> 6)
#define XY(x, y) (((y) << 6) + (x))     // Packing


using namespace std;

class SolverTest {
public:
	void init(const vector<string>& a);
	void bfs(int sx, int sy, int ex, int ey);
private:
  int N_;

  int LASTROW_;
  
  char a_[4096];		// 64 * 64 = 4096

  bool visit_[4096];
};

#endif
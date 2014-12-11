#include "Solver.h"


const int dy[] = {-1,  0,  1,  0};
const int dx[] = { 0, -1,  0,  1};


void SolverTest::init(const vector<string>& a) {
  N_ = a.size();

  LASTROW_ = (N_ - 1) << 6;

  for (int i = 0, p = 0; i < N_; i ++, p += 64)
    for (int j = 0, pp = p; j < N_; j ++, pp ++)
      a_[pp] = a[i][j];
}

void SolverTest::bfs(int sx, int sy, int ex, int ey) {
  memset(visit_, 0, sizeof(visit_));

  int s = XY(sx, sy), e = XY(ex, ey);

  std::queue<int> queue;

  queue.push(s);

  visit_[s] = true;

  while (! queue.empty()) {
    int p = queue.front(), pp;

    queue.pop();

    int x = X(p);

    if (p >= 64 && ! visit_[pp = p - 64] && a_[pp] == '.') {
      if (pp == e)
        return;

      visit_[pp] = true;

      queue.push(pp);
    }
    if (x > 0 && ! visit_[pp = p - 1] && a_[pp] == '.') {
      if (pp == e)
        return;

      visit_[pp] = true;

      queue.push(pp);
    }
    if (p < LASTROW_ && ! visit_[pp = p + 64] && a_[pp] == '.') {
      if (pp == e)
        return;

      visit_[pp] = true;

      queue.push(pp);
    }
    if (x < N_ - 1 && ! visit_[pp = p + 1] && a_[pp] == '.') {
      if (pp == e)
        return;

      visit_[pp] = true;

      queue.push(pp);
    }
  }
}
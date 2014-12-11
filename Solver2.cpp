#include "Solver.h"


const int dy[] = {-1,  0,  1,  0};
const int dx[] = { 0, -1,  0,  1};


void SolverTest::init(const vector<string>& a) {
  N_ = a.size();

  for (int i = 0; i < N_; i ++)
    for (int j = 0; j < N_; j ++)
      a_[i][j] = a[i][j];
}

void SolverTest::bfs(int sx, int sy, int ex, int ey) {
  for (int i = 0; i < N_; i ++)
    for (int j = 0; j < N_; j ++)
      visit_[i][j] = false;

  visit_[sy][sx] = true;

  queue<int> queue;

  queue.push(XY(sx, sy));

  while (! queue.empty()) {
    int p = queue.front(); queue.pop();

    int x = X(p);
    int y = Y(p);

    for (int k = 0; k < 4; k ++) {
      int xx = x + dx[k], yy = y + dy[k];

      if (0 <= xx && xx < N_ && 0 <= yy && yy < N_) {
        if (xx == ex && yy == ey)
          return;

        if (! visit_[yy][xx])
          if (a_[yy][xx] == '.') {
            visit_[yy][xx] = true;

            queue.push(XY(xx, yy));
          }
      }
    }
  }
}
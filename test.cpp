#include <vector>
#include <iostream>

using namespace std;

class solver_t {
public:
  void init(const std::vector<std::string>& a);

  void bfs(int sx, int sy, int ex, int ey);

private:
  std::vector<std::string> a_;

  int N_;

  std::vector<std::vector<bool> > visit_;
};


void solver_t::init(const std::vector<std::string>& a)
{
  a_ = a;

  N_ = a_.size();

  visit_.assign(N_, std::vector<bool>(N_));
};

int main() {
	cout << 1 << endl;
}
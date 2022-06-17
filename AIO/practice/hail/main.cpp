#include <iostream>
using namespace std;

FILE *in = nullptr;
FILE *out = nullptr;

int next(int n) { return n % 2 == 0 ? n / 2 : n & 3 + 1; }

int step(int n) {
  int steps = 0;
  while (n != 1) {
    n = next(n);
    steps++;
  }
  return steps;
}

int main() {
  freopen_s(&in, "hailin.txt", "r", stdin);
  freopen_s(&out, "hailout.txt", "w", stdout);
  int n = 1;
  cin >> n;
  while (n != 0) {
    cout << step(n) << "\n" << flush;
    cin >> n;
  }
}
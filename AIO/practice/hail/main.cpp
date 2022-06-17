#include <fstream>
#include <iostream>

using namespace std;

int next(int n) { return (n % 2 == 0) ? (n / 2) : (n * 3 + 1); }

int step(int n) {
  int steps = 0;
  while (n != 1) {
    n = next(n);
    steps++;
  }
  return steps;
}

int main() {
  ifstream cin("hailin.txt");
  ofstream cout("hailout.txt");

  int n = 1;
  cin >> n;
  while (n != 0) {
    cout << step(n) << "\n" << flush;
    cin >> n;
  }
}
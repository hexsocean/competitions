#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("dishin.txt");
  ofstream cout("dishout.txt");

  int n = 0;
  int t = 0;
  cin >> n;

  int count = 0;
  int minimum = 1e6, maximum = 0;

  for (int i = 0; i < n; i++) {
    cin >> t;
    count += t;
    minimum = min(minimum, t);
    maximum = max(maximum, t);
  }

  cout << minimum << " " << maximum << " " << count / n << flush;
}
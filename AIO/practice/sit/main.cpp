#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("sitin.txt");
  ofstream cout("sitout.txt");

  int r, s, t = 0;
  cin >> r >> s >> t;

  int totalSeats = (r * s);
  cout << min(totalSeats, t) << " " << max(t - totalSeats, 0) << flush;
}
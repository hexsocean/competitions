#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("taktakin.txt");
  ofstream cout("taktakout.txt");

  int n = 0;
  cin >> n;

  int days = 0;
  while ((n - 1) % 11 != 0) {
    days++;
    n *= 2;
  }
  cout << days << " " << n << flush;
}
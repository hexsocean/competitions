#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("cultin.txt");
  ofstream cout("cultout.txt");
  int n = 0;
  cin >> n;

  int doubles = 0;
  while (n % 2 == 0) {
    doubles++;
    n /= 2;
  }

  cout << n << " " << doubles << flush;
}
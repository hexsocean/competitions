#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream cin("nomin.txt");
  ofstream cout("nomout.txt");
  int n = 0;
  cin >> n;

  int dish = 0;
  int current = 0;
  int eaten = 0;
  int satisfied = 0;
  for (int i = 0; i < n; i++) {
    cin >> dish;
    eaten += dish;
    if (eaten >= current) {
      current = eaten;
      eaten = 0;
      satisfied++;
    }
  }
  cout << satisfied << flush;
}
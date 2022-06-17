#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("countin.txt");
  ofstream cout("countout.txt");

  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "\n";
  }
  cout << flush;
}
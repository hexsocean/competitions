#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("mixin.txt");
  ofstream cout("mixout.txt");

  int n, d = 0;
  cin >> n >> d;

  int wholes = n / d;
  int parts = n - (d * wholes);
  cout << wholes;
  if (parts)
    cout << " " << parts << "/" << d;
  cout << flush;
}
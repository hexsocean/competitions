#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("addin.txt");
  ofstream cout("addout.txt");

  int a, b = 0;
  cin >> a >> b;
  cout << a + b;
}
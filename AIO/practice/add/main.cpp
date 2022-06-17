#include <iostream>
using namespace std;

FILE *in = nullptr;
FILE *out = nullptr;

int main() {
  freopen_s(&in, "addin.txt", "r", stdin);
  freopen_s(&out, "addout.txt", "w", stdout);
  int a, b = 0;
  cin >> a >> b;
  cout << a + b;
}
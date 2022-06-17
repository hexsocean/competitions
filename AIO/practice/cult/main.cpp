#include <iostream>
using namespace std;

FILE *in = nullptr;
FILE *out = nullptr;

int main() {
  freopen_s(&in, "cultin.txt", "r", stdin);
  freopen_s(&out, "cultout.txt", "w", stdout);
  int n = 0;
  cin >> n;

  int doubles = 0;
  while (n % 2 == 0) {
    doubles++;
    n /= 2;
  }

  cout << n << " " << doubles << flush;
}
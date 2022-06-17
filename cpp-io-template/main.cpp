#include <iostream>
using namespace std;

FILE *in = nullptr;
FILE *out = nullptr;

int main() {
  freopen_s(&in, "{[.NAME.]}in.txt", "r", stdin);
  freopen_s(&out, "{[.NAME.]}out.txt", "w", stdout);
  int take = 0;
  cin >> take;
  for (int i = 0; i < take; i++) {
    char temp;
    cin >> temp;
    cout << temp;
  }
}
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream cin("{[.NAME.]}in.txt");
  ofstream cout("{[.NAME.]}out.txt");

  int take = 0;
  cin >> take;
  for (int i = 0; i < take; i++) {
    char temp;
    cin >> temp;
    cout << temp;
  }
}
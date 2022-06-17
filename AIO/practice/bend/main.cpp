#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int get_rect_area(int x1, int y1, int x2, int y2) {
  return (x2 - x1) * (y2 - y1);
}

int main() {
  ifstream cin("bendin.txt");
  ofstream cout("bendout.txt");

  int a_x1, a_y1, a_x2, a_y2 = 0;
  int b_x1, b_y1, b_x2, b_y2 = 0;
  cin >> a_x1 >> a_y1 >> a_x2 >> a_y2;
  cin >> b_x1 >> b_y1 >> b_x2 >> b_y2;

  int o_w = min(a_x2, b_x2) - max(a_x1, b_x1);
  int o_h = min(a_y2, b_y2) - max(a_y1, b_y1);
  int overlap = max(o_w, 0) * max(o_h, 0);

  cout << get_rect_area(a_x1, a_y1, a_x2, a_y2) +
              get_rect_area(b_x1, b_y1, b_x2, b_y2) - overlap;
}
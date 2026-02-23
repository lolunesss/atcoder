#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int x = 0, y = 0;
  int dx = 1, dy = 0;
  for (auto ch : s) {
    // cout << x << ":" << y << ":" << dx << ":" << dy << endl;
    if (ch == 'S') {
      x += dx;
      y += dy;
    } else if (ch == 'R') {
      if (dx == 1 && dy == 0) {
        dx = 0;
        dy = -1;
      } else if (dx == 0 && dy == -1) {
        dx = -1;
        dy = 0;
      } else if (dx == -1 && dy == 0) {
        dx = 0;
        dy = 1;
      } else if (dx == 0 && dy == 1) {
        dx = 1;
        dy = 0;
      }
    }
  }
  cout << x << " " << y << endl;
  return 0;
}
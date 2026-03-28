#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int s = b - a;
  while (s >= 2) {
    int l = (a - 1) / s;
    int r = (b / s);
    if (r - l >= 2) {
      break;
    }
    s--;
  }
  cout << s << endl;
  return 0;
}
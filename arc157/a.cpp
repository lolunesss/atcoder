#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c, d;

  cin >> n >> a >> b >> c >> d;
  if (b == 0 && c == 0) {
    if (a == 0 || d == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else if (abs(b - c) <= 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
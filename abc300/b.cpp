#include <bits/stdc++.h>

using namespace std;

bool shifted_equal(char** a, char** b, int r, int c, int rs, int cs) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] != b[(i + rs) % r][(j + cs) % c]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int r, c;
  cin >> r >> c;
  char** a = new char*[r];
  char** b = new char*[r];
  for (int i = 0; i < r; i++) {
    a[i] = new char[c];
    string s;
    cin >> s;
    for (int j = 0; j < c; j++) {
      a[i][j] = s[j];
    }
  }
  for (int i = 0; i < r; i++) {
    b[i] = new char[c];
    string s;
    cin >> s;
    for (int j = 0; j < c; j++) {
      b[i][j] = s[j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (shifted_equal(a, b, r, c, i, j)) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
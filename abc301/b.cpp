#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int prev;
  cin >> prev;
  cout << prev;
  for (int i = 1; i < n; i++) {
    int curr;
    cin >> curr;
    if (curr >= prev + 1) {
      for (int j = prev + 1; j <= curr; j++) {
        cout << " " << j;
      }
    } else if (curr <= prev - 1) {
      for (int j = prev - 1; j >= curr; j--) {
        cout << " " << j;
      }
    }
    prev = curr;
  }
  cout << endl;
  return 0;
}
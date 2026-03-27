#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int i = 1;
  for (i = min(a, b); i >= 0 && k > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      k--;
    }
  }
  cout << i + 1 << endl;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> ns(n);
  for (int i = 0; i < n; i++) {
    cin >> ns[i];
    if (ns[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  long long p = 1;
  for (auto x : ns) {
    if (x > 1000000000000000000 / p) {
      cout << -1 << endl;
      return 0;
    }
    p *= x;
  }
  cout << p << endl;
  return 0;
}
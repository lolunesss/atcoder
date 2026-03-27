#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int s = 0;

  vector<int> ns;
  int p2 = INT_MAX;
  int p3 = INT_MAX;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    int c2 = 0;
    while (a % 2 == 0) {
      a /= 2;
      s++;
      c2++;
    }
    p2 = min(p2, c2);

    int c3 = 0;
    while (a % 3 == 0) {
      a /= 3;
      s++;
      c3++;
    }
    p3 = min(p3, c3);
    ns.push_back(a);
  }

  bool all_equal = true;
  for (auto n : ns) {
    if (n != ns[0]) {
      all_equal = false;
    }
  }

  if (!all_equal) {
    cout << -1 << endl;
  } else {
    cout << s - n * p2 - n * p3 << endl;
  }
  return 0;
}
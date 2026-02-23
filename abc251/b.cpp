#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, w;
  cin >> n >> w;
  vector<int> ns(n);
  for (int i = 0; i < n; i++) {
    cin >> ns[i];
  }
  vector<int> good(w + 1, 0);
  ns.push_back(0);
  ns.push_back(0);
  int count = 0;
  sort(ns.begin(), ns.end());
  for (int i = 0; i < n + 2; i++) {
    for (int j = i + 1; j < n + 2; j++) {
      for (int k = j + 1; k < n + 2; k++) {
        int a = ns[i] + ns[j] + ns[k];
        if (a <= w) {
          if (good[a] == 0) {
            good[a] = 1;
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;

  return 0;
}
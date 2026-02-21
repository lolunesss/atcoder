#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  map<int, int> ms;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ms[a]++;
  }
  bool poss = true;
  for (int i = 0; i < d; i++) {
    int a;
    cin >> a;
    if (ms[a] == 0) poss = false;
    if (ms[a] > 0) {
      ms[a]--;
    }
  }
  cout << (poss ? "Yes" : "No") << endl;
  return 0;
}
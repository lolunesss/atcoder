#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int** arr = new int*[m];
  for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  set<pair<int, int>> s;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n - 1; j++) {
      int mi = min(arr[i][j], arr[i][j + 1]);
      int ma = max(arr[i][j], arr[i][j + 1]);
      s.insert({mi, ma});
    }
  }
  cout << (n * n - n) / 2 - s.size() << endl;
  return 0;
}
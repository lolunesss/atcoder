#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[14] = {0};
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  arr[a]++;
  arr[b]++;
  arr[c]++;
  arr[d]++;
  arr[e]++;
  bool has2 = false, has3 = false;
  for (int i = 0; i < 14; i++) {
    if (arr[i] == 3) has3 = true;
    if (arr[i] == 2) has2 = true;
  }
  if (has2 && has3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
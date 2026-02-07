#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  double nearest = n / 5.0;
  cout << int(round(nearest)) * 5 << endl;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  cin >> k;

  int hours = k / 60;
  int mins = k % 60;
  cout << 21 + hours << ":" << setfill('0') << setw(2) << mins << endl;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long l = lcm(c, d);
  long long int cs = b / c - (a - 1) / c;
  long long int ds = b / d - (a - 1) / d;
  long long int ls = b / l - (a - 1) / l;
  cout << b - a + 1 - cs - ds + ls << endl;
  return 0;
}
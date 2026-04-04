#include <bits/stdc++.h>

#define PRIME 0
#define NOT_PRIME 1

#define MAX 1000001

using namespace std;

long long int pow(long long int n, long long int k) {
  long long p = 1;
  for (int i = 0; i < k; i++) {
    p *= n;
  }
  return p;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int primes[MAX];
  primes[0] = NOT_PRIME;
  primes[1] = NOT_PRIME;

  for (int i = 2; i * i < MAX; i++) {
    if (primes[i] == PRIME) {
      for (int j = i + i; j < MAX; j += i) {
        primes[j] = NOT_PRIME;
      }
    }
  }
  vector<int> ps;
  for (int i = 2; i < MAX; i++) {
    if (primes[i] == PRIME) {
      ps.push_back(i);
    }
  }

  long long int n, p;
  cin >> n >> p;

  long long result = 1;
  for (int i = 0; ps[i] * ps[i] <= p && i < ps.size(); i++) {
    int c = 0;
    while (p % ps[i] == 0) {
      p /= ps[i];
      c++;
    }
    result *= pow(ps[i], c / n);
  }

  result *= pow(p, 1 / n);
  cout << result << endl;

  return 0;
}
/**
 *    author:  tourist
 *    created: 11.07.2023 10:39:45       
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << 1 << '\n';
      continue;
    }
    if (n == 2) {
      cout << 1 << " " << 2 << '\n';
      continue;
    }
    cout << 2;
    for (int i = 4; i <= n / 2 + 2; i++) {
      cout << " " << i;
    }
    cout << " " << 1;
    for (int i = n / 2 + 3; i <= n; i++) {
      cout << " " << i;
    }
    cout << " " << 3 << '\n';
  }
  return 0;
}

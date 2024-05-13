#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a, max = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a > max) {
      max = a;
    }
  }

  cout << max << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

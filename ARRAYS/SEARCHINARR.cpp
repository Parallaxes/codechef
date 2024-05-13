#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  bool ok = false;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == x) {
      ok = true;
    }
  }

  cout << ((ok == true) ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  while (t--) {
    solve();
  }

  return 0;
}

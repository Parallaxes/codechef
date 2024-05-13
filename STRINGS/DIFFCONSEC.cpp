#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      cnt++;
    }
  }

  cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

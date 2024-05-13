#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int scoreA = 0, scoreB = 0, server = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A' && server == 0) {
      scoreA++;
    } else if (s[i] == 'B' && server == 1) {
      scoreB++;
    } else {
      server = !server;
    }
  }

  cout << scoreA << " " << scoreB << endl;
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

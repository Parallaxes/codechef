#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;


  for (int i = 0; i < 5; i++) {
    s1[i] = (s1[i] == s2[i]) ? 'G' : 'B';
  }

  cout << s1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

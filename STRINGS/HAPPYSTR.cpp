#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;

  int cnt = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      cnt++;
      if (cnt > 2) {
        cout << "Happy" << endl;
        break;
      }
    } else {
      cnt = 0;
    }
  }

  if (cnt < 3) {
    cout << "Sad" << endl;
  }
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

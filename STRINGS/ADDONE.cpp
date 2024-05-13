#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;

  int carry = 1;
  for (int i = str.size() - 1; i >= 0; i--) {
    int digit = str[i] - '0' + carry;
    if (digit < 10) {
      str[i] = digit + '0';
      carry = 0;
      break;
    } else {
      str[i] = '0';
      carry = 1;
    }
  }

  if (carry) {
    str = '1' + str;
  }

  cout << str << endl;
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

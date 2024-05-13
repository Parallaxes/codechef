#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> ws;
  getline(cin, str);
  string result = "";
  bool isNewWord = true;
  bool isAcronym = true;

  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
      isNewWord = true;
      result += str[i];
      continue;
    }

    if (isNewWord) {
      isAcronym = true;
      for (int j = i; j < str.size() && str[j] != ' '; j++) {
        if (islower(str[j])) {
          isAcronym = false;
            break;
          }
      }
    }

    if (isAcronym) {
      result += str[i];
    } else {
      if (isNewWord) {
        result += toupper(str[i]);
      } else {
        result += tolower(str[i]);
      }
    }

    isNewWord = false;
  }

  cout << result << endl;
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

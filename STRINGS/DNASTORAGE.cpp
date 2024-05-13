#include <bits/stdc++.h>
using namespace std;

void solve() {
    int len;
    string str;
    cin >> len >> str;

    string res = "";
    for (int i = 0; i < len - 1; i += 2) {
        if (str[i] == '0' && str[i + 1] == '0') {
            res += 'A';
        } else if (str[i] == '0' && str[i + 1] == '1') {
            res += 'T';
        } else if (str[i] == '1' && str[i + 1] == '0') {
            res += 'C';
        } else if (str[i] == '1' && str[i + 1] == '1') {
            res += 'G';
        }
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

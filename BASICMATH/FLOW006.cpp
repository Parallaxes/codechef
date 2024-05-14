#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	int sum = 0;
	for (char c : to_string(n)) {
		sum += c - '0';
	}

	cout << sum << endl;
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

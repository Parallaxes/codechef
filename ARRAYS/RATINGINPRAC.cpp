#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> v(n);
	bool ok = true;
	cin >> v[0];
	for (int i = 1; i < n; i++) {
		cin >> v[i];
		if (v[i] < v[i - 1]) {
			ok = false;
		}
	}

	cout << (ok ? "YES" : "NO") << endl;
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

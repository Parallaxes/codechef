#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= b[i] * 2 && a[i] * 2 >= b[i]) {
			cnt++;
		}
	}

	cout << cnt << endl;
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

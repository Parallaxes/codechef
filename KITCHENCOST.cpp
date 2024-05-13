#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, x;
	cin >> n >> x;

	vector<int> fresh(n);
	vector<int> cost(n);
	for (int i = 0; i < n; i++) {
		cin >> fresh[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}

	int total = 0;
	for (int i = 0; i < n; i++) {
		if (fresh[i] >= x) {
			total += cost[i];
		}
	}

	cout << total << endl;
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

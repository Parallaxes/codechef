#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int min = *min_element(v.begin(), v.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > min) {
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

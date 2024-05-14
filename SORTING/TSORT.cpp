#include <bits/stdc++.h>
using namespace std;


void solve() {
	int t;
	cin >> t;

	int a;
	vector<int> v;
	for (int i = 0; i < t; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	for (int a : v) {
		cout << a << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	t = 1;
	while (t--) {
		solve();
	}

	return 0;
}

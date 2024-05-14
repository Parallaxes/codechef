#include <bits/stdc++.h>
using namespace std;


void solve() {
	int x, y;
	cin >> x >> y;

	cout << ((y > x) ? x + 2*(y-x) : y) << endl;
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

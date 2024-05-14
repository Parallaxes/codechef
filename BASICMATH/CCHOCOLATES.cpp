#include <bits/stdc++.h>
using namespace std;


void solve() {
	int x, y, z;
	cin >> x >> y >> z;

	cout << (x*5 + y*10) / z << endl;
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

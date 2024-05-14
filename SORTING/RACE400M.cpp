#include <bits/stdc++.h>
using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b && a < c) {
		cout << "ALICE" << endl;
	} else if (b < a && b < c) {
		cout << "BOB" << endl;
	} else {
		cout << "CHARLIE" << endl;
	}
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

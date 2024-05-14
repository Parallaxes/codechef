#include <bits/stdc++.h>
using namespace std;


void solve() {
	int a;
	cin >> a;

	if (a % 2 == 0 && a % 7 == 0) {
		cout << "ALICE" << endl;
	} else if (a % 2 != 0 && a % 9 == 0) {
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

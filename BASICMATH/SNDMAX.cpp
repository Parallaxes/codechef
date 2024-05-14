#include <bits/stdc++.h>
using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());
	
	cout << v[1] << endl;
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

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    int total = 0, discount = x, elem;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        total += elem;
        discount += (elem < y) ? 0 : elem - y;
    }
    
    cout << ((total > discount) ? "COUPON" : "NO COUPON") << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}

    return 0;
}

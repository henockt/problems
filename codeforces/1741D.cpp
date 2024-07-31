#include <bits/stdc++.h>
 
using namespace std;

#define NL cout << '\n'
#define AL '\n'

void solve() {

	int m;
	cin >> m;
	vector<int> v(m);
	for (auto& x : v) cin >> x;

	function<int (int, int)> f = [&](int l, int r) {
		// [l, r)
		if (l + 1 == r) return 0;
		
		int mid = l + (r-l) / 2;
		int ans = 0;
		ans += f(l, mid);
		ans += f(mid, r);

		if (v[l] > v[mid]) {
			for (int i = l, j = mid; i < mid; ++i, ++j)
				swap(v[i], v[j]);
			ans += 1;
		}
		return ans;
	};
	int ans = f(0, m);
	cout << (is_sorted(begin(v), end(v)) ? ans : -1) << AL;
}

int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
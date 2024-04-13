#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define AL '\n'

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void solve() {

	int n, m;
	cin >> n >> m;
	vi v(n), t(m);
	for (auto& x : v) cin >> x;
	for (auto& x : t) cin >> x;

	vi res(m);
	int l=0;
	for (int r=0; r<m; ++r) {
		while (l<n && v.at(l) < t.at(r)) { ++l; }
		res[r] = l;
	}

	cout << res << AL;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define PB push_back

#define NL cout << '\n'
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

	vi res(n + m);
	int a = 0, b = 0, c = 0;
	while (a < n || b < m) {
		if (b == m || (a < n && v[a] < t[b]))
			res[c++] = v[a++];
		else
			res[c++] = t[b++];
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

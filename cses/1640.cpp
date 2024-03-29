#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned int uint;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define NL cout << '\n'
#define AL '\n'

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	int n, k;
	cin >> n >> k;

	vi v(n);
	for (auto& x : v) cin >> x;

	unordered_map<int, int> m;

	REP (i, 0, n) {
		if (k < v.at(i)) continue;
		int comp = k - v.at(i);
		if (m.count(comp)) {
			cout << m[comp] + 1 << " " << i + 1 << AL;
			return;
		}
		m[v.at(i)] = i;
	}

	cout << "IMPOSSIBLE" << AL;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
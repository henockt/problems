#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef string str;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<str> vs;
typedef pair<int, int> pii;
typedef pair<str, int> psi;
typedef vector<pii> vpii;
typedef vector<psi> vpsi;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPP(i, a, b) for (int i = a; i <= b; ++i)

#define PB push_back
#define EB emplace_back
#define MP make_pair

#define NL cout << '\n'
#define AL '\n'

#define all(x) (x).begin(), (x).end()

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void setIO(str s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	int n, m;
	cin >> n >> m;
	vi c(n), t(m);
	for (auto& x : c) cin >> x;
	for (auto& x : t) cin >> x;

	// left-to-right sweep
	// find nearest tower to left of city
	vi a(n);
	int j = 0;
	for (int i = 0; i < n; ++i) { // for every city
		while (j + 1 < m && t.at(j + 1) <= c.at(i)) { j++; }
		a.at(i) = abs(c.at(i) - t.at(j));
	}

	// right-to-left sweep
	// find nearest tower to the right of city
	j = m - 1;
	int out = INT_MIN;
	for (int i = n - 1; i >= 0; --i) {
		while (j - 1 >= 0 && t.at(j - 1) >= c.at(i)) { j--; }
		a.at(i) = min(a.at(i), abs(c.at(i) - t.at(j)));
		out = max(out, a.at(i));
	}

	cout << out << AL;
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
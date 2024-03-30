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

template<typename T> ostream& operator<<(ostream& stream, const vector<T>& v) {
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

	vvi cols(m, vi(n));

	REP(i, 0, n) { for (auto& v : cols) { cin >> v.at(i); } }

	ll total = 0;
	for (auto& col : cols)
	{
		sort(all(col));

		ll rsum = col.at(0);

		for (int i = 1; i < n; ++i) {
			total += ((ll) col.at(i)) * i - rsum; 
			rsum += col.at(i);
		}
	}


	cout << total << AL;
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}
}
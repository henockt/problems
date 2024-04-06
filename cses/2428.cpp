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

	int n, k;
	cin >> n >> k;
	vi v(n);
	for (auto& x : v) cin >> x;

	int l = 0; ll cnt = 0;
	unordered_map<int, int> cmap;
	for (int r = 0; r < n; ++r) {
		cmap[v.at(r)]++;

		// retract
		while ((int) cmap.size() > k) {
			cmap[v.at(l)]--;
			if (cmap[v.at(l)] == 0) cmap.erase(v.at(l));
			++l;
		}

		cnt += r - l + 1;
	}

	cout << cnt << AL;
	
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
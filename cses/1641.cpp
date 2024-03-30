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

	int n, t;
	cin >> n >> t;
	vpii v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v.at(i).first;
		v.at(i).second = i;
	}

	sort(all(v));

	for (int i = 0; i < n; ++i) {
		int curr = v.at(i).first;

		int l = 0, r = n - 1;
		while (l < r) {
			if (l == i) { l++; continue; }
			if (r == i) { r--; continue; }

			if ((ll) curr + v.at(l).first + v.at(r).first < t) {
				l++;
			} else if ((ll) curr + v.at(l).first + v.at(r).first > t) {
				r--;
			} else {
				cout << v.at(i).second + 1 << " " << v.at(l).second + 1 << " " << v.at(r).second + 1 << AL;
				return; 
			}
		}
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
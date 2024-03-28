#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef unsigned int uint;

#define SQ(a) (a)*(a)
#define REP(i, a, b)  for (int i = a; i < b; i++)
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

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	int N, M;
	cin >> N >> M;

	vvi cows(N, vi(3));
	vvi aircnds(M, vi(4));

	REP(i, 0, N) { for (auto& x : cows.at(i)) cin >> x; }
	REP(i, 0, M) { for (auto& x : aircnds.at(i)) cin >> x; }

	vi covered(100 + 1);
	for (const auto& x : cows) { 
		REPP(i, x.at(0), x.at(1))
			covered.at(i) = x.at(2);
	}

	int subsSize = (1 << M), minAmnt = INT_MAX;
	vvi curr;
	for (int i = 0; i < subsSize; ++i) {
		curr.clear();
		int mask = i;
		for (int j = 0; j < M; j++) {
			if ((mask & 1) == 1) curr.PB(aircnds.at(j));
			mask = mask >> 1;
		}

		if (!curr.size()) continue;
		// process
		// check if valid, then calc min amount
		bool valid = true;
		for (int k = 1; k <= 100; ++k)
		{
			int currT = covered.at(k);
			if (!currT) continue; // if 0, continue

			for (auto& v : curr) {
				if (k >= v.at(0) && k <= v.at(1)) {
					currT -= v.at(2);
				}
			}

			if (currT > 0) {
				valid = false;
				break;
			}
		}

		if (valid) {
			int currPrice = 0;
			for (const auto& v : curr) {
				currPrice += v.at(3);
			}
			minAmnt = min(minAmnt, currPrice);
		}

	}

	cout << minAmnt << AL;

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
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {	

	setIO("word");
	int n, k;
	cin >> n >> k;
	vs v(n);
	REP(i, 0, n) cin >> v[i];

	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (c + v[i].size() <= k) {
			if (c) cout << " " << v[i];
			else   cout << v[i];
			c += v[i].size();
		} else {
			cout << '\n' << v[i];
			c = v[i].size();
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
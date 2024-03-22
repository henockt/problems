#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair

void solve() {

	vi v(7);
	REP(i, 0, 7) cin >> v.at(i);

	sort(v.begin(), v.end());

	cout << v.at(0) << " " << v.at(1) << " " << v.at(6) - (v.at(1) + v.at(0)) << '\n';

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
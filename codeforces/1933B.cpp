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

	int n;
	cin >> n;
	vi v(n);
	REP(i, 0, n) cin >> v[i];

	ll sum = 0;
	REP(i, 0, n) sum += v[i];

	// three cases

	// already div
	if (sum % 3 == 0) {
		cout << "0\n";
		return;
	}

	// removing an elem
	for (int i = 0; i < n; i++) {
		if ((sum - v[i]) % 3 == 0) {
			cout << "1\n";
			return;
		}
	}

	int moves = INT_MAX;
	// adding 1s
	ll a = sum / 3;
	moves = (a + 1) * 3 - sum;
	cout << moves << '\n';

	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}
}
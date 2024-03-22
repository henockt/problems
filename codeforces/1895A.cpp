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

	int x, y, k;
	cin >> x >> y >> k;

	if (x > y) {
		cout << x << '\n';
		return;
	}

	if (x + k >= y) {
		cout << y << '\n';
		return;
	}

	cout << y + (y - (x + k)) << '\n';
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
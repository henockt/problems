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

	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int c = min(a, b) - min(x, y);
	int d = max(a, b) - max(x, y);

	if (abs(c) > abs(a - b) || abs(d) > abs(a - b)) { // no need to use teleporter
		cout << abs(a - b) << '\n';
		return;
	}

	cout << abs(c) + abs(d) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
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

	int a, b;
	cin >> a >> b;
	int c, d;
	cin >> c >> d;

	if (d < a || b < c) { // completely disjoint
		cout << (b - a) + (d - c) << '\n';
		return;
	}
	cout << max(b, d) - min(a, c) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
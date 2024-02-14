#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


void solve() {

	int n, k;
	cin >> n >> k;

	const int MAX = 1000000000;

	vi v;
	REP(i, 0, n) {
		int t;
		cin >> t;
		v.PB(t);
	}

	sort(v.begin(), v.end());

	if (k == 0) {
		if (v[0] > 1) cout << "1" << '\n';
		else          cout << "-1" << '\n';
		return;
	}

	if (v[k-1] > MAX) {
		cout << "-1" << '\n';
		return;
	}

	if (v[k-1] == v[k]) {  // v[k] == 0 when k out of bounds
		cout << "-1" << '\n';
		return;
	}
	
	cout << v[k-1] << '\n';
	
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
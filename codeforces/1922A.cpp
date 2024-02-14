#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


void solve() {
	int len;
	cin >> len;

	vs strs;

	REP(i, 0, 3) {
		string s;
		cin >> s;
		strs.PB(s);
	}

	REP(i, 0, len) {
		char a = strs[0][i], b = strs[1][i], c = strs[2][i];
		if (a == b) {
			if (c != a) {
				cout << "YES\n";
				return;
			}
		} else {
			if (c != a && c != b) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";
	
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
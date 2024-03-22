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

	int b1, b2; cin >> b1 >> b2;
	int s1, s2; cin >> s1 >> s2;
	int g1, g2; cin >> g1 >> g2;
	int p1, p2; cin >> p1 >> p2;		
		
	int p = max(0, p2 - p1);
	int g = max(0, p + (g2 - g1));
	int s = max(0, g + (s2 - s1));		

	cout << s << '\n' << g << '\n' << p << '\n';		 
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
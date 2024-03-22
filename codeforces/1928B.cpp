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

	int n; cin >> n;
	vi v(n);
	for (int& x : v) cin >> x;

	sort(v.begin(), v.end());
	v.resize(unique(v.begin(), v.end()) - v.begin());

	int n2 = v.size();

	int l = 0, r = 0; int out = 1;
	while (r < n2)
	{
		while (r + 1 < n2 && (v.at(r + 1) - v.at(l)) < n)
			r++;

		while (l + 1 < n2 && (v.at(r) - v.at(l)) >= n)
			l++;
		
		out = max(out, r - l + 1);
		r++;
	}
 
	cout << out << '\n';

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
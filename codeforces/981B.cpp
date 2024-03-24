#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unsigned int uint;

#define SQ(a) (a)*(a)
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define NL cout << '\n'
#define AL '\n'
#define all(x) (x).begin(), (x).end()

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void solve() {
	
	int n;
	cin >> n;
	vector<pi> cf(n);
	for (auto& x : cf) cin >> x.first >> x.second;

	int m;
	cin >> m;
	vector<pi> tc(m);
	for (auto& x : tc) cin >> x.first >> x.second;

	sort(all(cf));
	sort(all(tc));

	int i = 0, j = 0;
	ll total = 0;
	while (i < n || j < m) {
		if (j == m || (i < n && cf.at(i).first < tc.at(j).first)) {
			total += cf.at(i).second;
			++i;
		} else if (i == n || cf.at(i).first > tc.at(j).first) {
			total += tc.at(j).second;
			++j;
		} else { // equal
			total += max(tc.at(j).second, cf.at(i).second);
			++i, ++j;
		}
	}

	cout << total << AL;
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
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
#define all(x) (x).begin(), (x).end()

#define NL cout << '\n'
#define AL '\n'

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
	vi v(n);
	for (auto& x : v) cin >> x;

	sort(all(v));
	v.resize(unique(all(v)) - v.begin());

	cout << v.size() << AL;
	
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
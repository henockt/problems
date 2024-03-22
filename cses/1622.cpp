#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned int uint;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define NL cout << '\n'
#define AL '\n'

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

uint n; string s;
vector<char> permutation; vector<vector<char>> perms;
vector<bool> chosen;

void search() {
    if (permutation.size() == n) { 
        perms.EB(permutation);
        return;
    }

	for (uint i = 0; i < n; ++i) {
        if (chosen[i]) continue;
        chosen[i] = true; 
        permutation.PB(s.at(i));
        search();
        chosen[i] = false;
        permutation.pop_back();
	}
}

void solve() {
	cin >> s;
	n = s.length();
	perms.reserve((1 << n));
	chosen.resize(n);

	search();

	sort(perms.begin(), perms.end());
	perms.resize(unique(perms.begin(), perms.end()) - perms.begin());

	cout << perms.size() << AL;
	for (const auto& x : perms) {
		for (const auto& c : x)
			cout << c;
		NL;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
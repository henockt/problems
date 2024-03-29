#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef string str;

typedef vector<int> vi;
typedef vector<str> vs;
typedef pair<int, int> pi;
typedef vector<pi> vpi;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
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

void solve() {

	setIO("whereami");

	int N;
	cin >> N;
	str s;
	cin >> s;
	
	unordered_set<str> cset;

	for (int size = 1; size <= N; ++size)
	{
		int valid = true;
		cset.clear();
		for (int l = 0; l + size <= N; ++l) {
			str a = s.substr(l, size);
			if (cset.count(a)) { valid = false; break; }
			cset.insert(a);
		}
		if (valid) { cout << size << AL; return; }
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
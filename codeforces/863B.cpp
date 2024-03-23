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
	vi v(2 * n);
	for (auto& x : v) cin >> x;

	int out = INT_MAX;

	for (int i = 0; i < 2 * n; ++i) {
		for (int j = 0; j < 2 * n; ++j) {
			if (i == j) continue;
			int size = 2 * (n - 1);

			vi a; a.reserve(size);
			for (int k = 0; k < 2 * n; ++k) {
				if (k != i && k != j) a.PB(v.at(k));
			}

			sort(all(a));

			int total = 0;
			for (int k = 0; k < size; k += 2) {
				total += a.at(k + 1) - a.at(k);
			}

			out = min(out, total);
		}
	}

	cout << out << AL;
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
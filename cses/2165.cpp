#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

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


void hanoi(int n, int fr, int mid, int to) {
	if (n <= 0) { return; }
	hanoi(n - 1, fr, to, mid);
	cout << fr << " " << to << AL;
	hanoi(n - 1, mid, fr, to);
}

void solve() {
	
	int n;
	cin >> n;
	cout << (1<<n) - 1 << AL;
	hanoi(n, 1, 2, 3);	
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
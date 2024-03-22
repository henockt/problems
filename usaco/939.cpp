#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	setIO("buckets");
	vector<vector<char>> v(10, vector<char>(10));

	pair<int, int> B, R, L;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char c; cin >> c;
			if 		(c == 'B') B = {i, j};
			else if (c == 'R') R = {i, j};
			else if (c == 'L') L = {i, j};
			v[i][j] = c;
		}
	}

	int offset = 0;
	if ((B.first - L.first) == 0 && R.first == B.first) { // on the same row
		int u = max(B.second, L.second), l = min(B.second, L.second); // check their col
		if (R.second > l && R.second < u) // if Rock in between
			offset = 2;
	} else if ((B.second - L.second) == 0 && R.second == B.second) { // on the same col
		int u = max(B.first, L.first), l = min(B.first, L.first); // check their row
		if (R.first > l && R.first < u) // if Rock in between
			offset = 2;
	}

	cout << abs(B.first - L.first) + abs(B.second - L.second) - 1 + offset << '\n';

	// cout << "B: " << B.first << ", " << B.second << '\n';
	// cout << "R: " << R.first << ", " << R.second << '\n';
	// cout << "L: " << L.first << ", " << L.second << '\n';

	// for (auto x : v)
	// {
	// 	for (auto y : x)
	// 		cout << y << " ";
	// 	cout << '\n';
	// }
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned int uint;

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

int n, cnt = 0;
vector<vector<char>> BOARD;


// checks for column, diag, taken (no need for row-check)
bool check(int row, int col) {
	// blocked check
	if (BOARD.at(row).at(col) == '*') {
		return false;
	}

	// column check, (col fixed, row changing)
	for (int i = 0; i < n; ++i) {
		if (BOARD.at(i).at(col) == 'Q') {
			return false;
		}
	}

	// diagonal check (top-left to bottom-right)
	{
		int sub = min(row, col);
		int r = row - sub, c = col - sub;
		for (; r < n && c < n; ++r, ++c) {
			if (BOARD.at(r).at(c) == 'Q') {
				return false;
			}
		}
	}

	// diagonal check (top-right to bottom-left)
	{
		int sub = min(row, n - col - 1);
		int r = row - sub, c = col + sub;
		for (; r < n && c >= 0; ++r, --c) {
			if (BOARD.at(r).at(c) == 'Q') {
				return false;
			}
		}
	}

	return true;
}

void search(int k) { // k - row
	if (k == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; ++i) { // i - column
		if (check(k, i)) { // backtrack if check returns false
			BOARD.at(k).at(i) = 'Q'; // choose (a new col)
			search(k + 1); // recurse (a new row)
			BOARD.at(k).at(i) = '.'; // un-choose
		}
	}
}

void solve() {
	n = 8;
	BOARD.resize(n, vector<char>(n));

	for (auto& r : BOARD) { for (auto& e : r) cin >> e; }

	search(0);

	cout << cnt << AL;
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
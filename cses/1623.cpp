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

vi subset;
vector<int> v;
ll totalSum = 0, minDiff = INT_MAX;
int n;

void recurApples(int k) {
	if (k == n) {
		ll currSum = 0;
		for (const auto& x : subset) { currSum += v.at(x); } // curr subset sum
		minDiff = min(minDiff, abs(totalSum - 2*currSum));
	} else {
		recurApples(k+1);
		subset.PB(k);
		recurApples(k+1);
		subset.pop_back();
	}
}

void solve() {

	cin >> n;
	v.reserve(n);
	REP(i, 0, n) {
		int k; cin >> k;
		v.PB(k); totalSum += k;
	}

	recurApples(0);

	cout << minDiff << AL;
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
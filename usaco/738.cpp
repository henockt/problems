#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef string str;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<str> vs;
typedef pair<int, int> pii;
typedef pair<str, int> psi;
typedef vector<pii> vpii;
typedef vector<psi> vpsi;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPP(i, a, b) for (int i = a; i <= b; ++i)

#define PB push_back
#define EB emplace_back
#define MP make_pair

#define NL cout << '\n'
#define AL '\n'

#define all(x) (x).begin(), (x).end()

template<typename T> ostream& operator<<(ostream& stream, vector<T>& v) {
	for (const auto& x : v) stream << x << " ";
	return stream;
}

void setIO(str s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {
	
	setIO("pairup");

	int N;
	cin >> N;

	vpii cows(N);
	for (auto& p : cows) { cin >> p.first; cin >> p.second; }

	sort(all(cows), [](pii a, pii b) { return a.second < b.second; });

	int l = 0, r = N - 1;
	ll maxS = INT_MIN;
	while (l < r) {
		pii left = cows.at(l), right = cows.at(r);
		maxS = max(maxS, left.second + (ll) right.second);

		int currPossCows = min(left.first, right.first);
		left.first -= currPossCows;
		right.first -= currPossCows;
		
		cows.at(l) = left;
		cows.at(r) = right;

		if (left.first == 0) l++;
		if (right.first == 0) r--;
	}

	cout << maxS << AL;
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
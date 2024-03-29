#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef string str;

typedef vector<int> vi;
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

	setIO("notlast");

	int N;
	cin >> N;

	unordered_map<string, int> cmap {{"Bessie", 0}, {"Elsie", 0}, {"Daisy", 0},
									 {"Gertie", 0}, {"Annabelle", 0}, {"Maggie", 0},
									 {"Henrietta", 0}};

	REP(i, 0, N) {
		str s; cin >> s;
		int c; cin >> c;
		cmap[s] += c;
	}

	vpsi pairs; pairs.reserve(7);
	for (const auto& p : cmap) {
		pairs.PB(p);
	}

	sort(all(pairs), [](psi a, psi b) {
		return a.second < b.second;
	});

	REP(i, 1, 6) {
		psi c = pairs.at(i), cb = pairs.at(i - 1), cf = pairs.at(i + 1);
		if (c.second != cb.second && c.second != cf.second) {
			cout << pairs.at(i).first << AL;
			return;
		} else if (c.second != cb.second && c.second == cf.second) {
			cout << "Tie" << AL;
			return;
		}
	}

	// last place check
	if (pairs.at(6).second != pairs.at(5).second) {
		cout << pairs.at(6).first << AL;
		return;
	}

	cout << "Tie" << AL;
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
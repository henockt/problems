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
	REP(i, 0, (int) v.size()) stream << v.at(i) << " ";
	return stream;
}

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	setIO("cownomics");
	
	int N, M;
	cin >> N >> M;

	vector<string> spotty; spotty.reserve(N);
	REP(i, 0, N) {
		string s; cin >> s;
		spotty.emplace_back(s);
	}
	vector<string> plain; spotty.reserve(N);
	REP(i, 0, N) {
		string s; cin >> s;
		plain.emplace_back(s);
	}

	unordered_map<char, bool> spot;

	int count = 0;

	for (int i = 0; i < M; ++i) // for every char
	{
		bool isSpotty = true;

		for (int j = 0; j < N; ++j) { // for every spotty
			spot[spotty.at(j).at(i)] = true;
		}

		for (int j = 0; j < N; ++j) {
			if (spot.count(plain.at(j).at(i))) {
				isSpotty = false;
				break;
			}
		}

		if (isSpotty) { count++; }
		spot.clear();
	}

	cout << count << AL;
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
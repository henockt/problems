#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<string> vs;
typedef unsigned int uint;

#define SQ(a) (a)*(a)
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REPP(i,a,b) for (int i = a; i <= b; ++i)
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

	setIO("lineup");

	int N;
	cin >> N;

	vector<pair<string, string>> pairs;
	pairs.reserve(N);

	REP(i, 0, N) {
		string s1; cin >> s1;
		REP(j, 0, 4) { string t; cin >> t; } // discard
		string s2; cin >> s2;
		pairs.PB({s1, s2});
	}

	vs cows {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};

	sort(all(cows));

	do { // for every permutation

		bool valid = true;

		// for every pair
		for (const auto& p : pairs)
		{
			// for every cow
			for (int i = 0; i < 8; ++i)
			{
				if (cows.at(i) == p.first)
				{
					if (i == 0 && cows.at(i + 1) != p.second) { valid = false; break; }
					else if (i == 7 && cows.at(i - 1) != p.second) { valid = false; break; }
					else if (i > 0 && i < 7 && cows.at(i - 1) != p.second && cows.at(i + 1) != p.second) { valid = false; break; }
				}
				else if (cows.at(i) == p.second)
				{
					if (i == 0 && cows.at(i + 1) != p.first) { valid = false; break; }
					else if (i == 7 && cows.at(i - 1) != p.first) { valid = false; break; }
					else if (i > 0 && i < 7 && cows.at(i - 1) != p.first && cows.at(i + 1) != p.first) { valid = false; break; }
				}
			}

			if (!valid) break;
		}

		if (valid) { break; }
	} while (next_permutation(all(cows)));

	for (const auto& s : cows) {
		cout << s << AL;
	}
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
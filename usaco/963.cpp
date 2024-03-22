#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair
#define NL cout << '\n'
#define AL '\n'

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	setIO("gymnastics");
	
	int K, N;
	cin >> K >> N;
	vi curr(N);
	vector<pair<int, int>> total;
	vector<int> count;

	for (int a = 0; a < K; ++a)
	{
		for (auto& x : curr) cin >> x; // getline

		// for every pair
		for (int i = 0; i < N; ++i)
		{
			for (int j = i + 1; j < N; ++j) 
			{
				int ind = -1; pair<int, int> c = MP(curr.at(i), curr.at(j));
				int s = total.size();
				for (int tInd = 0; tInd < s; ++tInd) 
				{
					pair<int, int> x = total.at(tInd);
					if (x.first == c.first && x.second == c.second) {
						ind = tInd; break;
					}
				}

				// if pair doesn't exist before
				if (ind == -1) {
					total.PB(MP(curr.at(i), curr.at(j)));
					count.PB(1);
				} else { // if pair exists before
					count.at(ind)++;
				}
				
			}
		}

		fill(curr.begin(), curr.end(), 0);
	}

	int c = 0;
	for (const auto& cu : count) {
		if (cu == K) c++;
	}
	cout << c << AL;
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
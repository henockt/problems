#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

const int TOTAL_MILES = 100;


void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve() {

	setIO("speeding");

	int N, M;
	cin >> N >> M;

	vi limit; limit.reserve(TOTAL_MILES);
	REP(i, 0, N)
	{
		int miles; cin >> miles;
		int currLimit; cin >> currLimit;
		REP(j, 0, miles) {
			limit.PB(currLimit);
		}
	}

	vi speed; speed.reserve(TOTAL_MILES);
	REP(i, 0, M)
	{
		int miles; cin >> miles;
		int currSpeed; cin >> currSpeed;
		REP(j, 0, miles) {
			speed.PB(currSpeed);
		}
	}

	int maxOver = 0;
	for (int i = 0; i < TOTAL_MILES; ++i) {
		maxOver = max(maxOver, speed.at(i) - limit.at(i));
	}
	cout << maxOver << '\n';
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

/**
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


void solve() {

	int N, M;
	cin >> N >> M;

	vector<pair<int, int>> rSegs(N), bSegs(M);

	{
		int prevMile = 0;
		for (auto& x : rSegs) {
			cin >> x.first >> x.second;
			x.first += prevMile;
			prevMile = x.first;
		}
	}

	{ 
		int prevMile = 0; 
		for (auto& x: bSegs) {
			cin >> x.first >> x.second;
			x.first += prevMile;
			prevMile = x.first;
		}
	}

	int maxOver = 0;
	for (int i = 0, j = 0; j < M; ++j) {
		while (i < N && rSegs.at(i).first <= bSegs.at(j).first) {
			maxOver = max(bSegs.at(j).second - rSegs.at(i).second, maxOver);
			// cout << rSegs.at(i).first << " " << rSegs.at(i).second << '\n';
			// cout << bSegs.at(j).first << " " << bSegs.at(j).second << '\n';
			// cout << '\n';
			++i;
		}
	}

	cout << maxOver << '\n';
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
*/
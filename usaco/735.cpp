#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define NL cout << '\n'
#define AL '\n'
#define println(x) cout << (x) << '\n'

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

ostream& operator<<(ostream& stream, vi v) {
	int size = v.size();
	REP(i, 0, size)
		stream << v.at(i) << " ";
	return stream;
}

void solve() {

	setIO("lostcow");

	int x, y;
	cin >> x >> y;

	if (x == y) { println(0); return; }

	int dist = 1, trav = 0;
	int prev = x;

	if (x < y)
	{
		while (prev < y) {
			int curr = x + dist;
			trav += abs(prev - curr);
			dist *= -2;
			prev = curr;
		}
	}
	else
	{
		while (prev > y) {
			int curr = x + dist;
			trav += abs(curr - prev);
			dist *= -2;
			prev = curr;
		}
	}

	println(trav - abs(prev - y));
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
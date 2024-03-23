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

	setIO("blocks");

	int n; cin >> n;

	const int SIZE = 26;
	vi v(SIZE);
	vi left(SIZE), right(SIZE);

	REP(i, 0, n)
	{
		string a, b;
		cin >> a >> b;

		for (const char& c : a) {
			left.at(c - 'a')++;
		}

		for (const char& c : b) {
			right.at(c - 'a')++;
		}

		REP(j, 0, SIZE) {
			v.at(j) += max(left.at(j), right.at(j));
		}

		fill(left.begin(), left.end(), 0);
		fill(right.begin(), right.end(), 0);
	}

	for (const auto& c : v) {
		cout << c << AL;
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
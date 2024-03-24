#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define SQ(a) (a)*(a)
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)


ostream& operator<<(ostream& stream, vi v) {
	int size = v.size();
	REP(i, 0, size)
		stream << v.at(i) << " ";
	return stream;
}

void solve() {

	vi cap(3); vi cur(3);
	REP(i, 0, 3) {
		cin >> cap.at(i);
		cin >> cur.at(i);
	}

	int curI = -1;
	for (int j = 0; j < 100; ++j)
	{
		curI++; curI %= 3;
		int nextI = curI + 1; nextI %= 3;

		int nextCap = max(0, cap.at(nextI) - cur.at(nextI));
		int poured = min(nextCap, cur.at(curI));

		cur.at(curI) -= poured;
		cur.at(nextI) += poured;
	}

	for (const auto& x : cur)
		cout << x << '\n';
	
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
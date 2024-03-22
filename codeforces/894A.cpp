#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define SQ(a) (a)*(a)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair

void solve() {

	string s; cin >> s;
	int size = s.size();

	int total = 0;
	for (int i = 0; i < size; i++)
	{
		if (s[i] != 'Q') continue;

		int aCount = 0;
		for (int j = i + 1; j < size; j++) {
			if (s[j] == 'A') aCount++;
			if (s[j] == 'Q') total += aCount;
		}
	}

	cout << total << '\n';

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
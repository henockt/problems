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
 
	ll heavyCount = 0, total = 0;
	for (int i = 0; i + 4 < size; ++i)
	{
		if (s.substr(i, 5) == "heavy") heavyCount++;
		if (s.substr(i, 5) == "metal") total += heavyCount;
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
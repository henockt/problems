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

	stack<pair<int, char>> uppers, lowers;

	for (int i = 0; i < size; i++)
	{
		if (s[i] == 'b' && lowers.size() > 0)
			lowers.pop();
		else if (s[i] == 'B' && uppers.size() > 0)
			uppers.pop();

		if (s[i] != 'b' && s[i] != 'B') 
		{
			if (isupper(s[i])) uppers.push({i, s[i]});
			else			   lowers.push({i, s[i]});
		}
	}

	vector<pair<int, char>> v; v.reserve(uppers.size() + lowers.size());
	while(uppers.size() > 0) {
		v.emplace_back(uppers.top());
		uppers.pop();
	}
	while (lowers.size() > 0) {
		v.emplace_back(lowers.top());
		lowers.pop();
	}

	sort(v.begin(), v.end());

	for (const auto& x : v)
		cout << x.second;
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}
}
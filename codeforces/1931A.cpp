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

	int n;
	cin >> n;
	char o[3] = {'a', 'a', 'a'};

	for (int i = 2; i >= 0; i--)
	{
		if (n > 26 + i) 
		{
			o[i] = 'z'; 
			n -= 26;
		} 
		else 
		{ 
			o[i] += (n - i - 1);
			n = i; 
		}
	}

	cout << o << '\n';
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
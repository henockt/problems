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

	array<int, 3> t{1, 2, 3};
	array<int, 3> arr{0, 0, 0};
	for (int i = 0; i < n; i++) {
		int a, b, c; 
		cin >> a >> b >> c;
		swap(t[a - 1], t[b - 1]);
		arr[t[c - 1] - 1]++;
	}

	cout << max({arr[0], arr[1], arr[2]}) << '\n';
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
}
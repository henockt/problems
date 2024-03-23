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

	ll n;
	cin >> n;

	while (n != 1)
	{
		cout << n << " ";
		if (n % 2 == 0) n /= 2;
		else			n = n * 3 + 1;
	}

	cout << n << '\n';
	
}


int main()  {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
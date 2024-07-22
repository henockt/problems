using ll = long long;

class Solution {
public:
    int countGoodNumbers(long long n) {
        const int M = 1e9 + 7;

        auto binpow = [](ll a, ll b) -> ll {
            a %= M; ll res = 1;
            while (b) {
                if (b & 1) res = (res*a) % M;
                a = (a*a) % M;
                b /= 2;
            }
            return res;
        };
        // n is even: n/2 evens, odds
        // n is  odd: n/2 + 1 evens, n/2 odds
        ll evens = n/2 + (n%2), odds = n/2;
        ll ans = (binpow(4, odds) * binpow(5, evens)) % M;
        return ans;
    }
};
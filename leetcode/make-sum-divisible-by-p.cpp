using ll = long long;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int rem = accumulate(begin(nums), end(nums), 0LL) % p;
        if (rem == 0) return 0;

        unordered_map<int, int> m;
        m[0] = -1;
        int minL = n, pref = 0;
        for (int i = 0; i < n; ++i) {
            // (pref - m[]) % p = rem
            // (pref - rem) % p = m[]
            pref = (pref + nums[i]) % p;
            int targ = (pref - rem + p) % p;
            if (m.count(targ)) {
                minL = min(minL, i - m[targ]);
            }
            m[pref] = i;
        }
        return (minL == n ? -1 : minL);
    }
};
using ll = long long;

class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        
        vector<int> cnt(n);
        for (auto& p : requests) {
            cnt[p[0]]++;
            if (p[1] + 1 != n) cnt[p[1] + 1]--; 
        }
        partial_sum(begin(cnt), end(cnt), begin(cnt));

        sort(begin(nums), end(nums));
        sort(begin(cnt), end(cnt));

        const int M = 1e9 + 7;
        ll res = 0;
        for (int i = 0; i < n; ++i) {
            res = (res + ((cnt[i] * (ll) nums[i]) % M)) % M;
        }
        return res;
    }
};
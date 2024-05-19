class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        partial_sum(begin(nums), end(nums), begin(nums));
        unordered_map<int, int> cnt;
        cnt[0] = 1;
        int res = 0;
        for (const auto& x : nums) {
            int comp = x - goal;
            if (cnt.count(comp)) {
                res += cnt[comp];
            }
            cnt[x]++;
        }
        return res;
    }
};
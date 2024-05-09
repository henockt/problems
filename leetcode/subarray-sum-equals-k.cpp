class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        partial_sum(begin(nums), end(nums), begin(nums));
        unordered_map<int, int> m;
        m[0] = 1;
        int cnt = 0;
        for (const auto& x : nums) {
            cnt += m[x - k];
            m[x]++;
        }
        return cnt;
    }
};
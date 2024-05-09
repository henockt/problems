class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        partial_sum(begin(nums), end(nums), begin(nums));
        vector<int> rems(k);
        int cnt = 0;
        rems[0] = 1;
        for (const auto& x : nums) {
            cnt += rems[(x % k + k) % k];
            rems[(x % k + k) % k]++;
        }
        return cnt;
    }
};
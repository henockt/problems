class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int res = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int curr = lower_bound(begin(nums), end(nums), nums[i] + nums[j]) - begin(nums) - j - 1;
                res += max(0, curr);
            }
        }
        return res;
    }
};
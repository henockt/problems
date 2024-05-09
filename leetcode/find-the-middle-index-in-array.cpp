class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        partial_sum(begin(nums), end(nums), begin(nums));
        for (int i = 0; i < n; ++i) {
            int leftSum = (i - 1 >= 0 ? nums[i - 1] : 0);
            int rightSum = (i + 1 < n ? (nums[n - 1] - nums[i]) : 0);
            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }
};
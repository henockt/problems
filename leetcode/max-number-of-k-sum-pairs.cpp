class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), cnt = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            if (nums[l] + nums[r] < k) { ++l; }
            else if (nums[l] + nums[r] > k) { --r; }
            else { l++, --r; ++cnt; }
        }
        return cnt;
    }
};
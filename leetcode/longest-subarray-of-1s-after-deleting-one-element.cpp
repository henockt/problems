class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, zcnt = 0, maxL = 0;
        for (int r = 0; r < (int) nums.size(); ++r) {
            if (nums[r] == 0) ++zcnt;
            while (zcnt > 1) {
                if (nums[l++] == 0) --zcnt;
            }
            maxL = max(maxL, r - l);
        }

        return maxL;
    }
};
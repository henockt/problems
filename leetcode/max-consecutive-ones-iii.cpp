class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zcnt = 0;
        int l = 0, maxL = 0;
        for (int r = 0; r < (int) nums.size(); ++r) {
            if (nums[r] == 0) ++zcnt;
            while (zcnt > k) {
                if (nums[l++] == 0) --zcnt;
            }
            maxL = max(maxL, r - l + 1);
        }

        return maxL;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
        for (int x : nums) {
            if (x == 0)      r++;
            else if (x == 1) w++;
            else             b++;
        }

        int index = 0;
        for (int i = 0; i < r; i++) nums[index++] = 0;
        for (int i = 0; i < w; i++) nums[index++] = 1;
        for (int i = 0; i < b; i++) nums[index++] = 2;
    }
};
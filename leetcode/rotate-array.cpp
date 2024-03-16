class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        if (k == 0) return;

        {
            // reverse array
            int l = 0, r = size - 1;
            while (l < r)
                swap(nums[l++], nums[r--]);
        }

        {
            // left part
            int l = 0, r = k - 1;
            while (l < r)
                swap(nums[l++], nums[r--]);
        }

        {
            // right part
            int l = k, r = size - 1;
            while (l < r)
                swap(nums[l++], nums[r--]);
        }
    }
};
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int len = nums.size();

        for (int i = 0; i < len-1; i++)
        {
            if (nums.at(i) == nums.at(i + 1))
            {
                nums.at(i) *= 2;
                nums.at(i + 1) = 0;
            }
        }

        // move-zeroes
        for (int i = 0, j = 0; i < len; i++)
        {
            if (nums.at(i) != 0)
            {
                swap(nums.at(i), nums.at(j));
                j++;
            }
        }
        return nums;
    }
};
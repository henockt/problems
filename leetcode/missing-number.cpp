class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i < size; i++) 
        {
            while (nums[i] != i) 
            {
                if (nums[i] == size) break;
                swap(nums[i], nums[nums[i]]);
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (nums[i] != i) return i;
        }

        return size;
    }
};
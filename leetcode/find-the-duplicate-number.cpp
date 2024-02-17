class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int d = nums.at(0);

        for (int i = 0; i < len; i++) 
        {
            while (nums.at(i) != i+1) 
            {
                if (nums.at(i) == nums.at(nums.at(i) - 1))
                    return nums.at(i);

                swap(nums.at(i), nums.at(nums.at(i) - 1));
            }
        }

        return d;
    }
};
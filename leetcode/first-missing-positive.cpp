class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // cyclic sort
        int len = nums.size();
        for (int i = 0; i < len; i++) 
        {
            while (nums.at(i) != i+1)
            {
                // break if nums[i] > len or nums[i] is negative or swapped elmts are equal
                if (nums.at(i) < 1 || nums.at(i) > len || nums.at(i) == nums.at(nums.at(i)-1))
                    break;

                swap(nums.at(i), nums.at(nums.at(i) - 1));
            }
        }

        for (int i = 0; i < len; i++)
            if (nums.at(i) != i+1) 
                return i+1;

        return len+1;
    }
};
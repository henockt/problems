class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();

        vector<int> out;
        for (int i = 0; i < len; i++)
        {
            while(nums.at(i) != i+1)
            {
                if (nums.at(i) == nums.at(nums.at(i) - 1))
                    break;
                
                swap(nums.at(i), nums.at(nums.at(i) - 1));
            }
        }

        for (int i = 0; i < len; i++)
        {
            if (nums.at(i) != i+1)
                out.push_back(nums.at(i));
        }

        return out;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            while (nums.at(i) != (i+1))
            {
                if (nums[i] == nums[nums[i]-1])
                    break;
                
                swap(nums[i], nums[nums[i]-1]);
            }
        }

        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            if (nums.at(i) != (i+1)) 
                v.push_back(i+1);
        }
        return v;
    }
};
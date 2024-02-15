class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = nums[0];
        int count = 1;
        int size = nums.size();

        for (int i = 1; i < size; i++)
        {
            if (nums[i] == m) {
                count++;
            } else {
                if (count == 0) {
                    m = nums[i];
                    count = 1;
                }
                else count--;
            }
        }
        return m;
    }
};
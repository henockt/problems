class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();

        int l = 0, r = size - 1;
        while (l < r)
        {
            int sum = numbers.at(l) + numbers.at(r);
            if (sum < target) {
                l++;
            } else if (sum > target) {
                r--;
            } else {
                return {l+1, r+1};
            }
        }

        return {l+1, r+1};
    }
};
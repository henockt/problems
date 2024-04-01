class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums);
        sort(v.begin(), v.end());

        unordered_map<int, int> less;
        int ind = 0;
        for (const auto& x : v) {
            if (!less.count(x)) less[x] = ind;
            ind++; 
        }
        for (int i = 0; i < (int) nums.size(); ++i) {
            nums.at(i) = less[nums.at(i)];
        }

        return nums;
    }
};
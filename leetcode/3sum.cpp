class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            int targ = -nums[i];
            int l = i + 1, r = n - 1;
            while (l < r) {
                if (nums[l] + nums[r] < targ) { ++l; }
                else if (nums[l] + nums[r] > targ) { --r; }
                else { res.insert({nums[i], nums[l], nums[r]}); ++l, --r; }
            }
        }

        vector<vector<int>> out;
        out.reserve(res.size());
        for (const auto& v : res) { out.push_back(v); }
        return out;
    }
};
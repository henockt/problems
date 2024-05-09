class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long clo = INT_MAX;
        int r = (int) nums.size() - 1;
        for (int i = 0; i < (int) nums.size() - 1; ++i) {
            int l = i + 1;
            while (l < r) {
                int c = nums.at(i) + nums.at(l) + nums.at(r);
                if (abs(c - target) < abs(clo - target)) { clo = c; }
                if (c < target) { ++l; } else { --r; }
            }
        }

        return clo;
    }
};
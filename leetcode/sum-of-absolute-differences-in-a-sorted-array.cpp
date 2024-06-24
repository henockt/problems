class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> psum(nums);
        partial_sum(begin(psum), end(psum), begin(psum));
        int n = nums.size();
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            int left = 0;
            if (i) left = i * nums[i] - psum[i - 1];
            int right = (psum[n - 1] - psum[i]) - (nums[i] * (n - i - 1));
            res[i] = left + right;
        }
        return res;
    }
};
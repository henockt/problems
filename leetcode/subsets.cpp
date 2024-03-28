class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = (int) nums.size();
        int n = (1 << size);
        vector<vector<int>> subs;
        subs.reserve(n);
        
        vector<int> curr;
        for (int i = 0; i < n; ++i) {
            curr.clear();
            int m = i;
            for (int j = 0; j < size; ++j) {
                if (m & 1 == 1) curr.push_back(nums.at(j));
                m = m >> 1;
            }
            subs.push_back(curr);
        }

        return subs;
    }
};
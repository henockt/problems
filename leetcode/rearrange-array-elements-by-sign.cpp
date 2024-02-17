#include <bits/stdc++.h>

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        deque<int> pos, neg;
        for (int n : nums) {
            if (n < 0) neg.push_back(n);
            else       pos.push_back(n);
        }

        vector<int> v;
        for (int i = 0, s = nums.size()/2; i < s; i++) {
            v.push_back(pos.front());
            v.push_back(neg.front());
            pos.pop_front();
            neg.pop_front();
        }

        return v;
    }
};
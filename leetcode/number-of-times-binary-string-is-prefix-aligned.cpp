class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        unordered_set<int> cset;
        int cnt = 0, cmax = INT_MIN;
        
        for (const auto& i : flips) {
            cmax = max(i, cmax);
            cset.insert(i);
            if ((int) cset.size() == cmax) { cnt++; }
        }

        return cnt;
    }
};
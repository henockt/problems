class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "") { return 0; }

        unordered_set<char> cset;
        int l = 0, maxL = INT_MIN;
        for (int r = 0; r < (int) s.length(); ++r) {
            while (cset.count(s[r])) {
                cset.erase(s[l++]);
            }
            cset.insert(s[r]);
            maxL = max(maxL, r - l + 1);
        }

        return maxL;
    }
};
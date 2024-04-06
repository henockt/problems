class Solution {
public:
    int maxVowels(string s, int k) {
        int vcnt = 0;
        set<char> vowels {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < k; ++i) {
            if (vowels.count(s[i])) vcnt++;
        }

        int maxV = vcnt;
        for (int r = k; r < s.length(); ++r) {
            if (vowels.count(s[r])) ++vcnt;
            if (vowels.count(s[r - k])) --vcnt;
            maxV = max(maxV, vcnt);
        }

        return maxV;
    }
};
class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int ones = count(begin(s), end(s), '1');

        int lz = s[0] == '0', lo = s[0] == '1';
        int maxS = 0;
        for (int i = 1; i < n; ++i) {
            int currS = lz + (ones - lo);
            maxS = max(maxS, currS);
            lz += s[i] == '0';
            lo += s[i] == '1';
            cout << currS << '\n';
        }
        return maxS;
    }
};
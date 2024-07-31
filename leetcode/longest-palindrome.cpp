class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for (auto& c : s) m[c]++;
        int ans = 0, odd = false;
        for (auto& [a, b] : m) {
            ans += b / 2 * 2;
            if (b & 1) odd = true;
        }
        return ans + odd;
    }
};
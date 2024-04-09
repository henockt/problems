class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        unordered_map<char, int> target;
        for (const auto& c : s1) { target[c]++; }

        unordered_map<char, int> curr;
        int k = s1.length();
        for (int i = 0; i < k; ++i) { curr[s2.at(i)]++; }
        if (curr == target) return true;

        for (int r = k; r < (int) s2.length(); ++r) {
            curr[s2.at(r)]++, curr[s2.at(r - k)]--;
            if (curr[s2.at(r - k)] == 0) curr.erase(s2.at(r - k));
            if (curr == target) return true;
        }

        return false;
    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> target;
        for (const auto& c : p) { target[c]++; }

        int k = p.length(); // fixed window
        unordered_map<char, int> curr;
        vector<int> out; out.reserve(s.length());
        for (int i = 0; i < k; ++i) { curr[s[i]]++; }
        if (curr == target) out.push_back(0);

        for (int r = k; r < (int) s.length(); ++r) {
            curr[s[r]]++, curr[s[r - k]]--;
            if (curr[s[r - k]] == 0) curr.erase(s[r - k]);
            if (curr == target) out.push_back(r - k + 1);
        }

        out.resize(out.size());
        return out;
    }
};
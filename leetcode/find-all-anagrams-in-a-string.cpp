class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> out;
        out.reserve(s.size());

        unordered_map<char, int> curr, targ;
        for (const auto& c : p) { targ[c]++; }

        int l = 0;
        for (int r = 0; r < s.size(); ++r) {
            curr[s.at(r)]++;

            while (l < r && curr[s.at(l)] > targ[s.at(l)]) { // retract
                curr[s.at(l)]--;
                l++;
            }

            if (curr == targ) {
                out.emplace_back(l);
            }
        }

        out.resize(out.size());
        return out;
    }
};
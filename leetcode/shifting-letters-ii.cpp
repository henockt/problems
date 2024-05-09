class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        // direction = 1, v[i] = 1, v[j + 1] = -1
        // direction = 0, v[i] = -1, v[j + 1] = 1
        vector<int> v(s.size() + 1);
        for (const auto& p : shifts) {
            (p[2] ? (v[p[0]]++, --v[p[1]+1]) : (v[p[0]]--, ++v[p[1]+1]));
        }
        partial_sum(begin(v), end(v), begin(v));
        
        int n = s.length(); 
        for (int i = 0; i < n; ++i) {
            int x = s[i] - 'a';
            x = (x + (v[i] % 26) + 26) % 26;
            s[i] = (char) (x + 'a');
        }
        return s;
    }
};
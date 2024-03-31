class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<string, int>> v;
        v.reserve(n);

        for (int i = 0; i < n; ++i) {
            v.push_back({names.at(i), heights.at(i)});
        }

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });

        vector<string> out; out.reserve(n);
        for (auto& p : v) { out.push_back(p.first); }
        
        return out;
    }
};
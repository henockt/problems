class Solution {
public:
    static bool isLess(pair<char, int> &p, pair<char, int> &q) {
        return p.second > q.second;
    }
    string frequencySort(string s) {
        map<char, int> m;
        // count
        for (char c : s)
            m[c]++;
        
        vector<pair<char, int>> v;
        for (auto x : m)
            v.push_back(x);

        sort(v.begin(), v.end(), isLess);

        string str = "";
        for (auto x : v) {
            for (int i = 0; i < x.second; i++)
                str += x.first;
        }
        return str;
    }
};
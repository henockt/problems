class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        int n = senate.length();
        for (int i = 0; i < n; ++i)
            senate[i] == 'R' ? r.push(i) : d.push(i);
        
        while (r.size() && d.size()) {
            int a = r.front(), b = d.front();
            r.pop(); d.pop();
            a < b ? r.push(a + n) : d.push(b + n);
        }
        return r.size() ? "Radiant" : "Dire";
    }
};
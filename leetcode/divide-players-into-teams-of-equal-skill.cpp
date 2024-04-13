using ll = long long;

class Solution {
public:
    ll dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int l = 0, r = n - 1; 
        ll total = skill[0] + (ll) skill[n-1];
        ll chem = 0;
        while (l < r) {
            if (skill[l] + (ll) skill[r] != total) { chem = -1; break; }
            chem += skill[l] * (ll) skill[r];
            l++, --r;
        }
        return chem;
    }
};
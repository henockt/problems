class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0, t = 0;
        for (const auto& x : bills) {
            if (x == 5) f++;
            else if (x == 10) {
                t++;
                if (!f) return false;
                f--;
            } else {
                if (f && t) f--, --t;
                else if (f >= 3) f -= 3;
                else return false;
            }
        }
        return true;
    }
};
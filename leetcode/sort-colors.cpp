#define REP(a) for (int i = 0; i < a; ++i)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
        for (const auto& x : nums) {
            if      (x == 0) r++;
            else if (x == 1) w++;
            else             b++;
        }

        int index = 0;
        REP(r) nums[index++] = 0;
        REP(w) nums[index++] = 1;
        REP(b) nums[index++] = 2;
    }
};
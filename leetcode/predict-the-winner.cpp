class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int memo[n][n][2];
        function<int (int, int, bool)> f = [&](int l, int r, bool left) {
            if (l > r) return 0;
            if (memo[l][r][left] != -1) return memo[l][r][left];
            
            if (left) {
                return memo[l][r][left] = max(nums[l] + f(l+1, r, !left), nums[r] + f(l, r-1, !left));
            } else {
                return memo[l][r][left] = min(-nums[l] + f(l+1, r, !left), -nums[r] + f(l, r-1, !left));
            }
        };

        memset(memo, -1, sizeof(memo));
        return f(0, n-1, true) >= 0;
    }
};
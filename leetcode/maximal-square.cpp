class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = (matrix[0]).size();

        // create a 2d dynamic array of size m+1 by n+1
        //int **dp = new int*[m+1](); 
        //for (int i = 0; i < m+1; i++)
        //    dp[i] = new int[n+1]();

        vector<vector<int>> dp(m+1, vector<int>(n+1));
        int mx = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == '1') // min of left, top, and top-left plus 1 gives current max
                    dp[i+1][j+1] = min(dp[i][j], min(dp[i+1][j], dp[i][j+1])) + 1;
                else
                    dp[i+1][j+1] = 0;
                
                mx = max(dp[i+1][j+1], mx);
            }
        }

        //delete [] dp;
        return mx*mx;
    }
};
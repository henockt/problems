class NumMatrix {
private:
    vector<vector<int>> pr;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(); 
        pr.resize(m + 1, vector<int>(n + 1));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                pr[i][j] = matrix[i-1][j-1] + pr[i-1][j] + pr[i][j-1] - pr[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        ++row1, ++col1, ++row2, ++col2;
        int ans = pr[row2][col2] - pr[row2][col1-1] - pr[row1-1][col2] + pr[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
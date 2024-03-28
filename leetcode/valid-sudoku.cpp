class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int row = 9, col = 9;
        // row check
        {
            unordered_set<int> crow;
            for (const auto& row : board) {
                crow.clear();
                for (const auto& c : row) {
                    if (c == '.') continue;
                    if (crow.count(c - '0')) { return false; }
                    crow.insert(c - '0');
                }
            }
        }

        // col check
        { 
            unordered_set<int> ccol;
            for (int c = 0; c < col; ++c) {
                ccol.clear();
                for (int r = 0; r < row; ++r) {
                    if (board.at(r).at(c) == '.') continue;

                    if (ccol.count(board.at(r).at(c) - '0')) {
                        return false;
                    }
                    ccol.insert(board.at(r).at(c) - '0');
                }
            }
        }

        // 3-by-3 check
        {
            vector<pair<int, int>> starts {{1, 1}, {1, 4}, {1, 7},
                                           {4, 1}, {4, 4}, {4, 7},
                                           {7, 1}, {7, 4}, {7, 7}};
            
            for (const auto& start : starts)
            {
                unordered_set<int> curr;
                int r = start.first - 1, c = start.second - 1;
                for (int a = r; a < (r + 3); ++a) {
                    for (int b = c; b < (c + 3); ++b) {
                        if (board.at(a).at(b) == '.') continue;
                        if (curr.count(board.at(a).at(b) - '0')) { return false; }
                        curr.insert(board.at(a).at(b) - '0');
                    }
                }
            }
        }

        return true;
    }
};
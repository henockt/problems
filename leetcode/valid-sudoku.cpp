class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int row = 9, col = 9;
        
        // column check
        {
            unordered_set<char> ccol;
            for (int c = 0; c < col; ++c)
            {
                ccol.clear();
                for (int r = 0; r < row; ++r) {
                    char curr = board.at(r).at(c);
                    if (curr == '.') { continue; }
                    if (ccol.count(curr)) { return false; }
                    ccol.insert(curr);
                }
            }
        }

        // row check
        {
            unordered_set<char> crow;
            for (int r = 0; r < row; ++r)
            {
                crow.clear();
                for (int c = 0; c < col; ++c) {
                    char curr = board.at(r).at(c);
                    if (curr == '.') { continue; }
                    if (crow.count(curr)) { return false; }
                    crow.insert(curr);
                }
            }
        }

        // 3-by-3 check
        {
            vector<pair<int, int>> mids {{1, 1}, {1, 4}, {1, 7},
                                         {4, 1}, {4, 4}, {4, 7},
                                         {7, 1}, {7, 4}, {7, 7}};
            unordered_set<char> cbox;
            for (const auto& p : mids)
            {
                cbox.clear();
                int i = p.first - 1, j = p.second - 1;
                for (int r = i; r < (i + 3); ++r) {
                    for (int c = j; c < (j + 3); ++c) {
                        char curr = board.at(r).at(c);
                        if (curr == '.') { continue; }
                        if (cbox.count(curr)) { return false; }
                        cbox.insert(curr);
                    }
                }

            }
        }

        return true;
    }
};
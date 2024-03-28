class Solution {
private:
    int cnt = 0;
    int size;
    vector<vector<char>> BOARD;

    bool check(int row, int col) {
        // col check (row changing)
        for (int i = 0; i < size; ++i) {
            if (BOARD.at(i).at(col) == 'Q') {
                return false;
            }
        }

        // diag check (top-left to bottom-right)
        {
            int sub = min(row, col);
            int r = row - sub, c = col - sub;
            for ( ; r < size && c < size; ++r, ++c) {
                if (BOARD.at(r).at(c) == 'Q') {
                    return false;
                }
            }
        }

        // diag check (top-right to bottom-left)
        {
            int sub = min(row, size - col - 1);
            int r = row - sub, c = col + sub;
            for ( ; r < size && c >= 0; ++r, --c) {
                if (BOARD.at(r).at(c) == 'Q') {
                    return false;
                }
            }
        }

        return true;
    }

    void search(int k) {
        if (k == size) {
            cnt++;
            return;
        }

        for (int i = 0; i < size; ++i) {
            if (check(k, i)) {
                BOARD.at(k).at(i) = 'Q';
                search(k + 1);
                BOARD.at(k).at(i) = '.';
            }    
        }
    }


public:
    int totalNQueens(int n) {
        // create an emtpy board
        size = n;
        BOARD.resize(n, vector<char>(n));
        for (auto& row : BOARD) { for (auto& e : row) e = '.'; }

        search(0);

        return cnt;
    }
};
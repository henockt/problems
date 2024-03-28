class Solution {
private:
    vector<vector<char>> BOARD;
    vector<vector<string>> BOARDS;
    int size;

    bool check(int row, int col) {
        // col check (row changes, col const)
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
        // success base case
        if (k == size) {
            vector<string> v;
            v.reserve(size);
            for (auto& row : BOARD) {
                stringstream s;
                for (auto& c : row) { s << c; }
                v.emplace_back(s.str());
            }
            BOARDS.emplace_back(v);
        }

        for (int i = 0; i < size; ++i) {
            if (check(k, i)) { // backtrack if this is not a valid position
                BOARD.at(k).at(i) = 'Q'; // choose
                search(k + 1); // recurse
                BOARD.at(k).at(i) = '.'; // un-choose
            }
        }
    }


public:
    vector<vector<string>> solveNQueens(int n) {
        // create an empty board
        size = n;
        BOARD.resize(n, vector<char>(n));
        for (auto& row : BOARD) { for (auto& e : row) e = '.'; }

        search(0);

        return BOARDS;
    }
};
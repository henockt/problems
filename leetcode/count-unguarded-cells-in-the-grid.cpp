class Solution {
private:
    vector<vector<bool>> covered;
    vector<vector<bool>> grid;

public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        covered.resize(m, vector<bool>(n));
        grid.resize(m, vector<bool>(n));

        for (const auto& v : walls) {
            covered.at(v.at(0)).at(v.at(1)) = true;
        }
        for (const auto& v : guards) {
            covered.at(v.at(0)).at(v.at(1)) = true;
        }


        for (const auto& v : guards) {
            int r = v.at(0), c = v.at(1);
            covered.at(r).at(c) = true;

            // north
            for (int a = r - 1; a >= 0; --a) {
                if (covered.at(a).at(c)) break;
                grid.at(a).at(c) = true;
            }
            // south
            for (int a = r + 1; a < m; ++a) {
                if (covered.at(a).at(c)) break;
                grid.at(a).at(c) = true;
            }

            // west
            for (int b = c - 1; b >= 0; --b) {
                if (covered.at(r).at(b)) break;
                grid.at(r).at(b) = true;
            }
            // east
            for (int b = c + 1; b < n; ++b) {
                if (covered.at(r).at(b)) break;
                grid.at(r).at(b) = true;
            }
        }

        int cnt = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!grid.at(i).at(j) && !covered.at(i).at(j))
                    cnt++;
            }
        }

        return cnt;
    }
};
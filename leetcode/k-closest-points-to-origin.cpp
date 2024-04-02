#define SQ(x) (x)*(x)
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(all(points), [](const auto& a, const auto& b) {
            int da = SQ(a.at(0)) + SQ(a.at(1));
            int db = SQ(b.at(0)) + SQ(b.at(1));
            return da < db;
        });

        points.resize(k);
        return points;
    }
};
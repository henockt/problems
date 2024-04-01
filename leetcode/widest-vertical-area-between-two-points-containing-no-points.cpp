class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int maxD = INT_MIN;
        int size = points.size();
        for (int i = 0; i < size - 1; ++i) {
            maxD = max(maxD, points.at(i + 1)[0] - points.at(i)[0]);
        }

        return maxD;
    }
};
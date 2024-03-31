class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& v : image) {
            reverse(v.begin(), v.end());
            for (auto& e : v) {
                if (e) e = 0;
                else   e = 1;
            }
        }

        return image;
    }
};
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> cmap;
        int i = 0;
        for (const auto& n : arr2) {
            cmap[n] = i++;
        }

        sort(arr1.begin(), arr1.end(), [&cmap](auto& a, auto& b) {
            if (!cmap.count(a)) { return false; }
            if (!cmap.count(b)) { return true; }
            return cmap[a] < cmap[b]; 
        });

        int j;
        for (j = 0; j < (int) arr1.size(); ++j) {
            if (!cmap.count(arr1.at(j))) { break; }
        }

        sort(arr1.begin() + j, arr1.end());

        return arr1;
    }
};
class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> out;
        int k = *max_element(arr.begin(), arr.end());
        int n = (int) arr.size();

        for (int c = k, d = 0; c >= 1; --c, ++d) {
            int ind = find(arr.begin(), arr.end(), c) - arr.begin();
            reverse(arr.begin(), arr.begin() + ind + 1);
            reverse(arr.begin(), arr.end() - d);
            out.push_back(ind + 1);
            out.push_back(n - d);
        }

        return out;
    }
};
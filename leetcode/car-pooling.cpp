class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int mx = 0;
        for (const auto& x : trips) {
            mx = max(mx, x[2]);
        }
        vector<int> v(mx + 1);
        for (auto& x : trips) {
            v[x[1]] += x[0];
            if (x[2] <= mx) v[x[2]] -= x[0];
        }
        partial_sum(begin(v), end(v), begin(v));
        return (*max_element(begin(v), end(v)) <= capacity ? 1 : 0);
    }
};
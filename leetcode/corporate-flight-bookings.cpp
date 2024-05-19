class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n);
        for (auto& x : bookings) {
            v[x[0] - 1] += x[2];
            if (x[1] < n) v[x[1]] -= x[2];
        }
        partial_sum(begin(v), end(v), begin(v));
        return v;
    }
};
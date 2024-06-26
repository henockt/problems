class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        int n = tickets.size();
        for (int i = 0; i < n; ++i) q.push({tickets[i], i});
        int time = 0;
        while (true) {
            auto [a, b] = q.front();
            q.pop();
            ++time;
            a -= 1;
            if (a) q.push({a, b});
            else if (b == k) return time;
        }
    }
};
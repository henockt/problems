class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // counting sort
        unordered_map<int, int> cmap;
        int maxC = INT_MIN;
        for (const auto& c : costs) { 
            cmap[c]++;
            maxC = max(c, maxC); 
        }
        int size = costs.size();
        costs.clear(); costs.reserve(size);
        for (int i = 1; i <= maxC; ++i) { // build sorted array
            if (!cmap.count(i)) continue;
            costs.insert(costs.end(), cmap[i], i);
        }

        // solve
        int n = 0;
        for (const auto& c : costs) {
            if (coins - c < 0) break;
            coins -= c;
            n++;
        }
        return n;
    }
};
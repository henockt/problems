class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(), piles.rend());
        int size = piles.size();
        int times = size / 3;
        
        int max = 0;
        // select every 2th element
        for (int i = 0, j = 1; i < times; i++) {
            max += piles[j];
            j += 2;
        }
        return max;
    }
};
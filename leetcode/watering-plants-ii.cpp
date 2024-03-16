class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int size = plants.size();
        int left = 0, right = size-1;
        int refill = 0;
        int a = capacityA, b = capacityB;

        while (left < right)
        {
            // both valid
            while (left < right && plants[left] <= a && plants[right] <= b) {
                a -= plants[left++];
                b -= plants[right--];
            }

            // left < right to check that it's not completed already
            if (left < right && a < plants[left]) { // if A needs refill
                refill++;
                a = capacityA;
            }
            if (left < right && b < plants[right]) { // if B needs refill
                refill++;
                b = capacityB;
            }

            if (left == right) 
            {
                if (a < plants[left] && b < plants[left]) 
                    refill++;
            }
        }
        return refill;
    }
};
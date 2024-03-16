class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        // no need for two pointers
        int index = 0; long long step = 0;
        int leng = plants.size();
        int c = capacity;

        while (index < leng) 
        {
            while (index < leng && plants.at(index) <= c) {
                c -= plants.at(index);
                index++, step++;
            }

            if (index != leng) // if all's not done
                step += (2 * (index)); // going back and forth;
            
            c = capacity; // refill
        }

        return step;
    }
};
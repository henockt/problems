class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if ((int) arr.size() < 3) {
            return false;
        }

        if (arr.at(0) > arr.at(1)) {
            return false;
        }

        bool increasing = true;

        for (int i = 0; i < (int) arr.size() - 1; ++i) {
            if (arr.at(i) < arr.at(i + 1) && !increasing) { 
                return false;
            }
            else if (arr.at(i) > arr.at(i + 1) && increasing) {
                if (increasing) increasing = false;
            }
            else if (arr.at(i) == arr.at(i + 1)) {
                return false;
            }
        }

        if (increasing) { return false; }

        return true;
    }
};
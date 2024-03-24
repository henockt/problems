class Solution {
private:
    vector<bool> chosen;
    vector<int> currPerm, list;
    vector<vector<int>> perms;
    int n;

    void findPermutations(int k) {
        if (k == 0) {
            perms.push_back(currPerm);
            return;
        }

        for (int i = 0; i < n; ++i) {
            if (chosen[i]) continue;
            
            // if prev elt chosen and similar with this, backtrack (stop this search)
            if (i > 0 && list.at(i) == list.at(i - 1) && chosen[i - 1]) return;

            // choose
            currPerm.push_back(list.at(i));
            chosen[i] = true;
            
            // recurse
            findPermutations(k - 1);

            // un-choose
            currPerm.pop_back();
            chosen[i] = false;
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        list = nums;
        n = (int) nums.size();
        chosen.resize(n);
        
        findPermutations(n);
        // sort(perms.begin(), perms.end());
        // perms.resize(unique(perms.begin(), perms.end()) - perms.begin());  
        return perms;
    }
};
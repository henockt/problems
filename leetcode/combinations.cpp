class Solution {
private:
    vector<vector<int>> combs;
    int n, k;
    vector<bool> chosen;
    vector<int> curr;

    void search() {
        if (curr.size() == k) {
            combs.push_back(curr);
            return;
        }

        int i = 0;
        if (!curr.empty())
            i = curr.back();

        for ( ; i < n; ++i) {
            if (chosen[i]) continue;

            curr.push_back(i + 1);
            chosen[i] = true;

            search();

            curr.pop_back();
            chosen[i] = false;
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        chosen.resize(n);
        this->n = n, this->k = k;

        search();

        return combs;
    }
};
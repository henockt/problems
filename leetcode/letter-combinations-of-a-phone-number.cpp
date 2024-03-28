class Solution {
private:
    int n;
    string digs;
    vector<string> combs;
    unordered_map<char, string> numToLets {{'2', "abc"}, {'3', "def"},
                                                  {'4', "ghi"}, {'5', "jkl"},
                                                  {'6', "mno"}, {'7', "pqrs"},
                                                  {'8', "tuv"}, {'9', "wxyz"}};
    
    void search(int k, string curr = "") {
        // success base case
        if (k == n) { 
            combs.push_back(curr);
            return;
        }

        for (const auto& c : numToLets[digs.at(k)]) {
            curr += c;
            search(k + 1, curr);
            curr = curr.substr(0, curr.size() - 1);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        n = digits.length();
        digs = digits;

        if (n == 0) {
            return combs;
        }

        search(0);

        return combs;
    }
};
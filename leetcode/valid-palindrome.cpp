class Solution {
public:
    bool isPalindrome(string s) {
        if (s == "") { return true; }

        stringstream ss;
        for (const auto& c : s) {
            if (isalnum(c)) { ss << (char) (tolower(c)); }
        }

        string t = ss.str();
        int l = 0, r = t.length() - 1;
        while (l < r) {
            if (t.at(l++) != t.at(r--)) { return false; }
        }
        return true;
    }
};
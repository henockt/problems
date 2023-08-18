class Solution {
public:
    bool isPalindrome(int x) {
        // egde case, negative numbers
        if (x < 0) return false;
        
        string a = to_string(x);
        int a_len = a.length();

        for(int i = 0; i < a_len; i++) {
            if(a[i] != a[a_len - i - 1])
               return false;
        }

        return true;
    }
};
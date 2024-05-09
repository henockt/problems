class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = typed.length(), k = name.length(), cnta = 0, cntb = 0;
        int l = 0, r = 0;
        for ( ; r < n; ++r, ++l) {
            if (l<k && name[l] != typed[r]) { return false; }
            while (l<k-1 && name[l+1]==typed[r]) { cnta++, ++l; }
            while (r<n-1 && typed[r+1]==typed[r]) { cntb++, ++r; }
            if (cnta > cntb) { return false; }
            cnta = cntb = 0;
        }
        if (l != k || r != n) { return false; } // remaining char
        return true;
    }
};
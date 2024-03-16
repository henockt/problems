class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int size = s.size();
        int cnt = 0;

        int l = 0;
        while (l <= size - k)
        {
            string a = s.substr(l, k);
            int c = stoi(a);
            if (c != 0 && num % c == 0) cnt++;
            l++;
        }
        
        return cnt;
    }
};
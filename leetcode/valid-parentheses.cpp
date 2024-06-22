class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, char> m { {')','('}, {'}','{'}, {']','['} };
        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else if (!st.empty() && st.top() == m[c])
                st.pop();
            else
                return false;
        }
        return st.empty();
    }
};
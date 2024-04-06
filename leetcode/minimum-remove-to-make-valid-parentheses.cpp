class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char, int>> st;

        int i = 0;
        for (const auto& c : s) {
            if (c == '(') { st.push({'(', i}); }
            else if (c == ')') {
                if (!st.empty() && st.top().first == '(') { st.pop(); }
                else { st.push({')', i}); }
            }
            ++i;
        }

        while (!st.empty()) {
            s.at(st.top().second) = '.';
            st.pop();
        }

        stringstream ss;
        for (const auto& c : s) {
            c != '.' ? ss << c : ss;
        }

        return ss.str();
    }
};
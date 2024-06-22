class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> currs;
        currs.push(0);
        for (const auto& c : s) {
            if (c == '(') {
                currs.push(0);
            }
            else {
                int t = currs.top(); currs.pop();
                if (t == 0) {
                    currs.top() += 1;
                } else {
                    currs.top() += t * 2;
                }
            }
        }
        return currs.top();
    }
};
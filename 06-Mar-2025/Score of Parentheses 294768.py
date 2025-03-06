# Problem: Score of Parentheses - https://leetcode.com/problems/score-of-parentheses/

class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        st = [0]
        for c in s:
            if c == "(":
                st.append(0)
                continue
            elif st[-1] == 0:
                st[-2] += 1
            else:
                st[-2] += 2 * st[-1]
            st.pop()

        return st[-1]

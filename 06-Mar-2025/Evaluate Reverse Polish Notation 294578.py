# Problem: Evaluate Reverse Polish Notation - https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        nums = deque()
        ops = {'+':1, '-':2, '*':3, '/':4}

        for token in tokens:
            if ops.get(token):
                b, a, c = nums.pop(), nums.pop(), 0
                if   ops[token] == 1: c=a+b
                elif ops[token] == 2: c=a-b
                elif ops[token] == 3: c=a*b
                elif ops[token] == 4: 
                    c = floor(abs(a/b))
                    if (a < 0) ^ (b < 0):
                        c = -c
                nums.append(c)
            else:
                nums.append(int(token))
            
        return nums.pop()


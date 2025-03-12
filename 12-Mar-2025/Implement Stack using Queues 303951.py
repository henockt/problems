# Problem: Implement Stack using Queues - https://leetcode.com/problems/implement-stack-using-queues/

from collections import deque

class MyStack:

    def __init__(self):
        self.elements = deque()
        self.elms = 0

    def push(self, x: int) -> None:
        self.elements.appendleft(x)
        self.elms += 1

    def pop(self) -> int:
        self.elms -= 1
        return self.elements.popleft()

    def top(self) -> int:
        return self.elements[0]

    def empty(self) -> bool:
        return self.elms == 0

# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
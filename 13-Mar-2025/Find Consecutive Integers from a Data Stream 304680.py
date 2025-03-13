# Problem: Find Consecutive Integers from a Data Stream - https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/

class DataStream:

    def __init__(self, value: int, k: int):
        self.k = k
        self.curr = 0
        self.value = value

    def consec(self, num: int) -> bool:
        if num == self.value:
            self.curr += 1
        else:
            self.curr = 0
        if self.curr >= self.k:
            return True
        return False


# Your DataStream object will be instantiated and called as such:
# obj = DataStream(value, k)
# param_1 = obj.consec(num)
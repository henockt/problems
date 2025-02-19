# Problem: Product of the Last K Numbers - https://leetcode.com/problems/product-of-the-last-k-numbers/description/

class ProductOfNumbers:

    def __init__(self):
        self.st = [1]
        self.ze = [0]

    def add(self, num: int) -> None:
        if num == 0:
            self.ze.append(self.ze[-1] + 1)
            self.st.append(self.st[-1])
        else:
            self.st.append(self.st[-1] * num)
            self.ze.append(self.ze[-1])

    def getProduct(self, k: int) -> int:
        if self.ze[-1] - self.ze[-(k + 1)] > 0:
            return 0
        return self.st[-1] // self.st[-(k + 1)]


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)
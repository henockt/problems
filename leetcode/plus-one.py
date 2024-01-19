class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        outInt = 0
        l = len(digits)

        # optimization
        if digits[l-1] < 9:
            digits[l-1] += 1
            return digits

        powers = l-1

        for i in range(l):
            d = digits[i]
            outInt += d * pow(10, powers)
            powers -= 1
        
        outInt += 1

        return [int(c) for c in str(outInt)]
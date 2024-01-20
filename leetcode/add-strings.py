class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        len1, len2 = len(num1), len(num2)
        maxLen, minLen = len1, len2
        if len1 < len2:
            num1, num2 = num2, num1
            maxLen, minLen = minLen, maxLen
            

        diff = maxLen - minLen
        carry = 0
        output = ""
        for i in range(maxLen - 1, -1, -1):
            maxI, minI = i, i-diff
            out = int(num1[maxI]) + carry
            carry = 0
            if minI >= 0:
                out += int(num2[minI])
            
            out = str(out)
            if len(out) == 1:
                output = out + output
            else:
                output = out[1] + output
                carry = int(out[0])

        if carry:
            output = str(carry) + output
        return output
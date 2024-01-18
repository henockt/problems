class Solution:
    def sortSentence(self, s: str) -> str:
        d = {}
        count = 0

        block = ""
        for c in s:
            if c == " ":
                continue

            try:
                a = int(c)
                d[a] = block
                count += 1
                block = ""
            except ValueError:
                block += c

        total = ""
        for i in range(1, count + 1):
            total += d[i] + " "
        return total.strip()
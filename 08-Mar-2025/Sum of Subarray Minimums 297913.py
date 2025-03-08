# Problem: Sum of Subarray Minimums - https://leetcode.com/problems/sum-of-subarray-minimums/

class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        n = len(arr)
        le, ri = [0] * n, [0] * n

        st = []
        for i in range(n):
            while st and arr[i] <= arr[st[-1]]:
                st.pop()
            le[i] = i - st[-1] if st else i + 1
            st.append(i)

        st = []
        for i in range(n-1, -1, -1):
            while st and arr[i] < arr[st[-1]]:
                st.pop()
            ri[i] = st[-1] - i if st else n - i
            st.append(i)
        
        ans = 0
        MOD = 10**9 + 7
        for i in range(n):
            ans = (ans + arr[i] * ((le[i] * ri[i]) % MOD)) % MOD
        return ans
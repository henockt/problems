class Solution:
    def numOfSubarrays(self, arr, k: int, threshold: int) -> int:
        left, right = 0, k-1
        leng = len(arr)
        
        # check first subarray
        sm = 0
        for i in range(k):
            sm += arr[i]
        avg = sm / k
        count = 0
        if avg >= threshold:
            count += 1
        
        # check the rest of subarrays, if any
        left += 1
        right += 1
        while right < leng:
            sm = sm - arr[left-1] + arr[right]
            avg = sm / k
            if avg >= threshold:
                count += 1
            left += 1
            right += 1

        return count
class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:        
        valToOcc = {}
        max = 1

        for val in nums:
            if valToOcc.get(val):
                valToOcc[val] += 1
                if valToOcc[val] > max:
                    max = valToOcc[val]
            else:
                valToOcc[val] = 1

        output = [[] for i in range(max)]

        for key, value in valToOcc.items():
            for i in range(value):
                output[i].append(key)
        
        return output
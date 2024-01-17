class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        elemToOcc = {}

        for elem in arr:
            if elemToOcc.get(elem):
                elemToOcc[elem] += 1
            else:
                elemToOcc[elem] = 1

        occToTrue = {}
        for key, value in elemToOcc.items():
            if occToTrue.get(value):
                return False
            occToTrue[value] = True
        
        return True
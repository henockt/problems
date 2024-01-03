class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:        
        valToOcc = {}
        out = [[]]
        rows = 1

        for val in nums:
            if valToOcc.get(val):
                valToOcc[val] += 1
                occ = valToOcc[val]
                if occ > rows:
                    out.append([])
                    rows += 1
                
                out[occ - 1].append(val)
            else:
                valToOcc[val] = 1
                out[0].append(val)
        
        return out

        


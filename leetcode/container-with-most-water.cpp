class Solution {
public:
    int maxArea(vector<int>& height) {
        long long maxA = 0;
        int size = height.size();
        int left = 0, right = size - 1;
        while (left < right)
        {
            long long currArea = (right - left) * min(height[left], height[right]);
            maxA = max(maxA, currArea);
            
            // greedy approach, move the side with smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxA;
    }
};
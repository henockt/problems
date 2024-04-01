#define all(x) (x).begin(), (x).end()

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(all(nums1));
        sort(all(nums2));
        int A = nums1.size(), B = nums2.size();
        
        int i = 0, j = 0;
        vector<int> v;
        while (i < A && j < B) {
            if (nums1.at(i) < nums2.at(j)) { 
                i++;
            } else if (nums1.at(i) > nums2.at(j)) {
                j++;
            } else {
                v.push_back(nums1.at(i));
                i++, ++j;
            }
        }

        return v;
    }
};
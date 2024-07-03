class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        // for circular array
        stack<int> st;
        for (int i=n-1; i>=0; --i) {
            while (!st.empty() && nums[i] >= st.top()) { st.pop(); }
            st.push(nums[i]);
        }

        // regular next greater
        vector<int> res(n);
        for (int i=n-1; i>=0; --i) {
            while (!st.empty() && nums[i] >= st.top()) { st.pop(); }
            st.empty() ? res[i] = -1 : res[i] = st.top();
            st.push(nums[i]);
        }
        return res;
    }
};
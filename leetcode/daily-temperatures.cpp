class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> s;
        vector<int> res(n);
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && temperatures[i] >= temperatures[s.top()]) { 
                s.pop();
            }
            res[i] = (s.empty() ? 0 : s.top() - i);
            s.push(i);
        }
        return res;
    }
};
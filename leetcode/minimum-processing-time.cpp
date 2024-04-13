#define all(x) (x).begin(), (x).end()

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(all(tasks));
        sort(all(processorTime));
        int res = INT_MIN;
        int n = processorTime.size();
        int k = tasks.size() - 1;
        for (const auto& p : processorTime) {
            res = max(res, p + tasks[k]);
            k -= 4;
        }
        return res;
    }
};
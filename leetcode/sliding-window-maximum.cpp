class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> cdeq; // maintain a monotonic deque (decreasing)
        for (int i = 0; i < k; ++i) {
            while (!cdeq.empty() && cdeq.back() < nums.at(i)) {
                cdeq.pop_back();
            }
            cdeq.push_back(nums.at(i));
        }

        vector<int> out; out.reserve((int) nums.size() - k + 1);
        out.push_back(cdeq.front());
        for (int r = k; r < (int) nums.size(); ++r) {
            if (cdeq.front() == nums.at(r - k)) { cdeq.pop_front(); } // removes element if out of window
            while (!cdeq.empty() && cdeq.back() < nums.at(r)) {
                cdeq.pop_back();
            }
            cdeq.push_back(nums.at(r));
            out.push_back(cdeq.front());
        }
        return out;
    }
};
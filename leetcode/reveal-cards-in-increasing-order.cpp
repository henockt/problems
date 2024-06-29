class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(rbegin(deck), rend(deck));
        deque<int> dq;
        for (int i = 0; i < deck.size(); ++i) {
            if (!dq.empty()) {
                int x = dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
            dq.push_front(deck[i]);
        }
        vector<int> res;
        res.reserve(deck.size());
        for (auto& x : dq) res.push_back(x);
        return res;
    }
};
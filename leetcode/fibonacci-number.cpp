class Solution {
public:
    int fib(int n) {
        map<int, int> m;
        function<int (int)> f = [&](int x) {
            if (x == 0) return 0;
            if (x == 1) return 1;
            if (m.count(x)) return m[x];
            return m[x] = f(x - 1) + f(x - 2);
        };
        return f(n);
    }
};
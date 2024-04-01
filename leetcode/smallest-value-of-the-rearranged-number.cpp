class Solution {
public:
    long long smallestNumber(long long num) {
        stringstream ss;
        ss << num;
        string s = ss.str();

        if (s.length() == 1) {
            return num;
        }

        vector<char> v;
        v.reserve(s.length());
        long long zcnt = 0;

        for (const auto& c : s) {
            if (c == '-') continue;
            if (c == '0') { zcnt++; continue; }
            v.push_back(c);
        }

        stringstream out;
        long long a;
        if (num > 0) {
            sort(v.begin(), v.end());
            out << v.at(0);
            for (int i = 0; i < zcnt; ++i) out << '0';
            for (int i = 1, size = (int) v.size(); i < size; ++i) out << v.at(i);
            out >> a;
        }
        else {
            sort(v.begin(), v.end(), greater<char>());
            out << '-';
            for (const auto& c : v) { out << c; }
            for (int i = 0; i < zcnt; ++i) out << '0';
            out >> a;
        }

        return a;
    }
};
class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string a = "";
        unordered_map<int, string> cmap;
        int size = 0;

        while (ss >> a) { // delimiter = " "
            int k = a.at(a.length() - 1) - '0';
            a = a.substr(0, a.length() - 1);
            cmap[k] = a;
            ++size;
        }

        stringstream out;
        for (int i = 1; i <= size; ++i) {
            out << cmap[i];
            if (i != size) out << " ";
        }

        return out.str();
    }
};
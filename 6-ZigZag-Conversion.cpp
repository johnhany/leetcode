static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string convert(string s, int numRows) {
        string t = "";
        if (numRows == 1) {
            return s;
        }
        int scale = 2 * (numRows - 1);
        int kLen = max(0, (int)(s.size() - numRows) / scale);
        for (int stride = 0; stride < numRows; stride++) {
            for (int k = 0; k < kLen; k++) {
                t += s[k*scale + stride];
                if (stride != 0 && stride != numRows - 1) {
                    t += s[k*scale + scale - stride];
                }
            }
            for (int k = kLen; k < s.size(); k++) {
                if (k*scale + stride < s.size())
                    t += s[k*scale + stride];
                if (stride != 0 && stride != numRows - 1) {
                    if (k*scale + scale - stride < s.size())
                        t += s[k*scale + scale - stride];
                }
            }
        }
        return t;
    }
};

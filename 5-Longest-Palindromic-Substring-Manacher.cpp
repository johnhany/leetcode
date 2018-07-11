static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string longestPalindrome(string s) {
        string t = "^#";
        for (int i=0; i<s.size(); i++) {
            t += s[i];
            t += "#";
        }
        //t += '^';
        int p[t.size()] = {0}, id = 0, mx = 0, maxCenter = 0, maxLength = 0;
        for (int i=0; i<t.size(); i++) {
            p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;
            while (t[i + p[i]] == t[i - p[i]])
                p[i]++;
            if (mx < i + p[i]) {
                mx = i + p[i];
                id = i;
            }
            if (maxLength < p[i]) {
                maxLength = p[i];
                maxCenter = i;
            }
        }
        
        return s.substr((maxCenter - maxLength) / 2, maxLength - 1);
    }
};

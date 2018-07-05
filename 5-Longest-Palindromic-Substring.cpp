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
        if (s.size() == 1) {
            return s;
        }
        if (s.size() == 2) {
            if (s[0] == s[1]) {
                return s;
            } else {
                return s.substr(0,1);
            }
        }
        int pali_len = 1;
        int pali_idx = 0;
        for (int i = 1; i < s.size(); i++) {
            // odd
            int len = min(i, (int)s.size()-i-1);
            int flag = 0;
            for (int j = 1; j <= len; j++) {
                if (s[i-j] == s[i+j]) {
                    flag = j;
                } else {
                    break;
                }
            }
            if (2*flag+1 > pali_len) {
                pali_len = 2*flag+1;
                pali_idx = i;
            }
            
            //even
            len = min(i-1, (int)s.size()-i-1);
            flag = -1;
            for (int j = 0; j <= len; j++) {
                if (s[i+j] == s[i-j-1]) {
                    flag = j;
                } else {
                    break;
                }
            }
            if (2*(flag+1) > pali_len) {
                pali_len = 2*(flag+1);
                pali_idx = i;
            }
        }
        return s.substr(pali_idx-pali_len/2, pali_len);
    }
};

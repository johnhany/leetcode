#include "solution.hpp"


string Solution::longestPalindrome(string s) {
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
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int len = 0;
    int left, right;
    for (int j=0; j<n; j++) {
        for (int i=0; i<=j; i++) {
            if (i == j) {
                dp[i][j] = 1;
            } else if (j == i+1) {
                dp[i][j] = (s[i]==s[j])? 1: 0;
            } else {
                dp[i][j] = (dp[i+1][j-1] == 1 && s[i]==s[j])? 1: 0;
            }
            if (dp[i][j] > 0 && (j-i+1) > len) {
                len = j-i+1;
                left = i;
                right = j;
            }
        }
    }
    return s.substr(left, len);
}

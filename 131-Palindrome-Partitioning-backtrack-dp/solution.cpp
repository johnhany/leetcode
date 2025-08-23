#include "solution.hpp"


// https://leetcode-cn.com/problems/palindrome-partitioning/solution/shou-hua-tu-jie-san-chong-jie-fa-hui-su-q5zjt/

void Solution::subPartition(vector<vector<string>>& rst, string& s, int start, int n, vector<string>& cur, vector<vector<bool>>& dp) {
    if (start>=n) {
        rst.push_back(cur);
        return;
    }

    for (int i=start; i<n; i++) {
        if (s[start]==s[i] && (i-start<=2 || dp[start+1][i-1])) {
            dp[start][i] = true;
            cur.push_back(s.substr(start, i-start+1));
            subPartition(rst, s, i+1, n, cur, dp);
            cur.pop_back();
        }
    }
    return;
}

vector<vector<string>> Solution::partition(string s) {
    int n = s.size();
    vector<vector<string>> rst;
    vector<string> cur;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    subPartition(rst, s, 0, n, cur, dp);
    return rst;
}

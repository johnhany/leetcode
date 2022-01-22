#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


bool Solution::isMatch(string s, string p) {
	int m = s.length(), n = p.length();
	vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
	dp[0][0] = true;
	for (int i=0; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			if (p[j-1] == '*') {
				dp[i][j] = dp[i][j-2] || (i>0 && (s[i-1]==p[j-2] || p[j-2]=='.') && dp[i-1][j]);
			} else {
				dp[i][j] = i>0 && dp[i-1][j-1] && (s[i-1]==p[j-1] || p[j-1]=='.');
			}
		}
	}
	return dp[m][n];
}

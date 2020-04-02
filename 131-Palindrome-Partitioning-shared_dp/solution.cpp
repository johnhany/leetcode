#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


void Solution::subPartition(vector<vector<string>>& q, string s, int start, vector<string>& cur, vector<vector<bool>>& dp) {
    if (start >= s.size()) {
		q.push_back(cur);
		return;
	}
	for (int i = 0; start + i < s.size(); i++) {
		if (!dp[start][start+i])
			continue;
		cur.push_back(s.substr(start, i+1));
		subPartition(q, s, start+i+1, cur, dp);
		cur.pop_back();
	}
}

vector<vector<string>> Solution::partition(string s) {
	if (s.empty()) return {};
	int n = s.size();
	vector<vector<string>> rst;
	vector<string> cur;
	vector<vector<bool>> dp(n, vector<bool>(n, false));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j <= i; ++j)
			if (s[i] == s[j] && (i - j <= 2 || dp[j + 1][i - 1]))
				dp[j][i] = true;
	subPartition(rst, s, 0, cur, dp);
	return rst;
}

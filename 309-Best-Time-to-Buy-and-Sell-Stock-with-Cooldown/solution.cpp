#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/solution/fei-zhuang-tai-ji-de-dpjiang-jie-chao-ji-tong-su-y/

int Solution::maxProfit(vector<int>& prices) {
	int n = prices.size();
	if(n<=1)
		return 0;
	vector<vector<int>> dp(n, vector<int>(3, 0));
	dp[0][1] = -prices[0];
	for(int i=1; i<n; i++) {
		dp[i][0] = max(dp[i-1][0], dp[i-1][2]);
		dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i]);
		dp[i][2] = dp[i-1][1] + prices[i];
	}
	return max(dp[n-1][0], dp[n-1][2]);
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://labuladong.gitee.io/algo/1/4/

int Solution::coinChange(vector<int>& coins, int amount) {
	vector<int> dp(amount+1, amount+1);
	dp[0] = 0;
	for (int i=1; i<=amount; i++) {
		for (int c: coins) {
			if (c > i)
				continue;
			dp[i] = min(dp[i], dp[i-c]+1);
		}
	}
	return dp[amount]==amount+1 ? -1 : dp[amount];
}

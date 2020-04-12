#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::rob(vector<int>& nums) {
	if (nums.empty()) return 0;
	int n = nums.size();
	vector<int> dp(n+1);
	dp[0] = 0;
	dp[1] = nums[0];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);
	}
	return dp[n];
}

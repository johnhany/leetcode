#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::lengthOfLIS(vector<int>& nums) {
	if (nums.empty()) return 0;
	int dp[nums.size()];
	int size = 0;
	for (auto& a : nums) {
		int pos = lower_bound(dp, dp+size, a) - dp;
		dp[pos] = a;
		if (pos == size)
			size++;
	}
	return size;
}

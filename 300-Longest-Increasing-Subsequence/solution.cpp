#include "solution.hpp"


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

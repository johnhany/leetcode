#include "solution.hpp"

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

int Solution::maxSubArray(vector<int>& nums) {
	if (nums.empty()) return 0;
    int n = nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    int rst = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1], 0) + nums[i];
        rst = max(dp[i], rst);
    }
    return rst;
}

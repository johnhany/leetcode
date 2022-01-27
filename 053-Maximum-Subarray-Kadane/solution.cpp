#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

int Solution::maxSubArray(vector<int>& nums) {
	int n = nums.size();
    int rst = nums[0], sum = 0;
    for (int i=0; i<n; i++) {
        sum += nums[i];
        rst = sum>rst ? sum : rst;
        sum = sum>0 ? sum : 0;
    }
    return rst;
}

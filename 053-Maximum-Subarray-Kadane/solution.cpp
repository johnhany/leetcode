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
	int int_max = (int)((~((unsigned int) 0)) >> 1);
    int int_min = ~int_max;
    int max_end = 0, max_sum = int_min;
    for (int i : nums) {
        max_end += i;
        if (max_sum < max_end)
            max_sum = max_end;
        if (max_end < 0)
            max_end = 0;
    }
    return max_sum;
}

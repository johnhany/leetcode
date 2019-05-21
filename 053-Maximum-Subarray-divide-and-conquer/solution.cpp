#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://www.geeksforgeeks.org/maximum-subarray-sum-using-divide-and-conquer-algorithm/

int Solution::maxSubArray(vector<int>& nums) {
	if (nums.empty()) return 0;
	else if (nums.size() == 1) return nums[0];
	return maxSubArraySum(nums, 0, nums.size()-1);
}

int Solution::max(int a, int b, int c) {
	return std::max(std::max(a, b), c);
}

int Solution::maxCrossingSum(vector<int>& nums, int l, int m, int h) {
    int int_max = (int)((~((unsigned int) 0)) >> 1);
    int int_min = ~int_max;
	int sum = 0;
    int left_sum = int_min;
    for (int i = m; i >= l; i--) {
        sum = sum + nums[i];
        if (sum > left_sum)
        	left_sum = sum;
    }
    sum = 0;
    int right_sum = int_min;
    for (int i = m+1; i <= h; i++) {
        sum = sum + nums[i];
        if (sum > right_sum)
        	right_sum = sum;
    }
    return left_sum + right_sum;
}

int Solution::maxSubArraySum(vector<int>& nums, int l, int h) {
	if (l == h)
    	return nums[l];
    int m = (l + h) / 2;
    return max(maxSubArraySum(nums, l, m),
               maxSubArraySum(nums, m+1, h),
               maxCrossingSum(nums, l, m, h));
}

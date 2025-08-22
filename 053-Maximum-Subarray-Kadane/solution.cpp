#include "solution.hpp"

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

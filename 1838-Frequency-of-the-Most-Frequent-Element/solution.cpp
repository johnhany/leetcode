#include "solution.hpp"


// https://leetcode-cn.com/problems/frequency-of-the-most-frequent-element/solution/1838-zui-gao-pin-yuan-su-de-pin-shu-shua-ub57/

int Solution::maxFrequency(vector<int>& nums, int k) {
	int n=nums.size(), left=0, rst=1;
	long sum=0;
	sort(nums.begin(), nums.end());
	for (int right=1; right<n; right++) {
		sum += (long)(nums[right] - nums[right-1]) * (right-left);
		while (sum > k)
			sum -= nums[right] - nums[left++];
		rst = max(rst, right-left+1);
	}
	return rst;
}

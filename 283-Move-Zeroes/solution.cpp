#include "solution.hpp"


// https://leetcode-cn.com/problems/move-zeroes/solution/dong-hua-yan-shi-283yi-dong-ling-by-wang_ni_ma/

void Solution::moveZeroes(vector<int>& nums) {
	int n = nums.size();
	int j = 0;
	for (int i=0; i<n; i++) {
		if (nums[i] != 0)
			nums[j++] = nums[i];
	}
	for (int i=j; i<n; i++)
		nums[i] = 0;
	return;
}

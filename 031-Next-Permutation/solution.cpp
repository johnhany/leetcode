#include "solution.hpp"

// https://leetcode-cn.com/problems/next-permutation/solution/xia-yi-ge-pai-lie-suan-fa-xiang-jie-si-lu-tui-dao-/

// 逆问题：上一个排列 https://www.cnblogs.com/Tang-tangt/p/9105987.html
// https://www.lintcode.com/submission/27977814/

void Solution::nextPermutation(vector<int>& nums) {
	int n = nums.size();
	int i = n-2, j = n-1, k = n-1;
	while (i>=0 && nums[i]>=nums[j]) {
		i--;
		j--;
	}
	if (i>=0) {
		while (nums[i]>=nums[k])
			k--;
		swap(nums[i], nums[k]);
	}
	reverse(nums.begin()+j, nums.end());
}

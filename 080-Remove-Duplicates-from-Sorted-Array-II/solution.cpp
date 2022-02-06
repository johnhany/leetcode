#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/gong-shui-san-xie-guan-yu-shan-chu-you-x-glnq/

int Solution::removeDuplicates(vector<int>& nums) {
	if (nums.size() < 2)
		return nums.size();
	int len=2;
	for (int i=2; i<nums.size(); i++) {
		if (nums[len-2] != nums[i])
			nums[len++] = nums[i];
	}
	return len;
}

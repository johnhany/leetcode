#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::removeDuplicates(vector<int>& nums) {
	int n = nums.size(), len = 0;
	for (int i = 1; i < n; i++) {
		if (nums[i] == nums[i-1])
			len++;
		else
			nums[i-len] = nums[i];
	}
	return n - len;
}

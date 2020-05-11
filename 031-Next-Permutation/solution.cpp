#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::nextPermutation(vector<int>& nums) {
	int len = nums.size();
	if (len <= 1) return;
	int k = len-2;
	while (k >= 0 && nums[k] >= nums[k+1]) {
		k--;
	}
	if (k >= 0) {
		int p = k+1;
		while (p < len && nums[p] > nums[k])
			p++;
		swap(nums[k], nums[p-1]);
	}
	reverse(nums.begin()+(k+1), nums.end());
}

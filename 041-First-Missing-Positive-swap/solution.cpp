#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::firstMissingPositive(vector<int>& nums) {
	for (int i = 0; i < nums.size(); ++i) {
		while (nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i]-1] != nums[i]) {
			swap(nums[i], nums[nums[i]-1]);
		}
	}
	for (int i = 0; i < nums.size(); ++i) {
		if (nums[i] != i+1) {
			return i+1;
		}
	}
	return nums.size()+1;
}


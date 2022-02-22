#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::search(vector<int>& nums, int target) {
	int left = 0;
	int right = nums.size() - 1;

	while(left <= right) {
		int mid = left + (right - left) / 2;
		if(nums[mid] == target)
			return mid;
		else if (nums[mid] < target)
			left = mid + 1;
		else if (nums[mid] > target)
			right = mid - 1;
	}
	return -1;
}

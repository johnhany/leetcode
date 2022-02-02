#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::subSearch(vector<int>& nums, int left, int right) {
	if (right==left)
		return nums[left];

	int mid = (left+right)/2;
	if (mid%2==0) {
		if (nums[mid] == nums[mid+1])
			return subSearch(nums, mid+2, right);
		else
			return subSearch(nums, left, mid);
	} else {
		if (nums[mid] == nums[mid-1])
			return subSearch(nums, mid+1, right);
		else
			return subSearch(nums, left, mid-1);
	}
}

int Solution::singleNonDuplicate(vector<int>& nums) {
	return subSearch(nums, 0, nums.size()-1);
}

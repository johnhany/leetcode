#include "solution.hpp"

int Solution::search(vector<int>& nums, int target) {
	return subSearch(nums, 0, nums.size()-1, target);
}

int Solution::subSearch(vector<int>& nums, int left, int right, int target) {
	if (left > right)
		return -1;
	int mid = (left + right) / 2;
	if (nums[mid]==target)
		return mid;
	if (nums[left] <= nums[mid]) {
		if (target >= nums[left] && target < nums[mid])
			return subSearch(nums, left, mid-1, target);
		else
			return subSearch(nums, mid+1, right, target);
	} else {
		if (target > nums[mid] && target <= nums[right])
			return subSearch(nums, mid+1, right, target);
		else
			return subSearch(nums, left, mid-1, target);
	}
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::searchInsert(vector<int>& nums, int target) {
	int n = nums.size();
	if (n == 0) return 0;
	return binarySearch(nums, target, 0, n-1);
}

int Solution::binarySearch(vector<int>& nums, int target, int start, int end) {
	if (target < nums[start]) return start;
	else if (target > nums[end]) return end+1;
	if (start >= end) return start;
	int k = (end + start) / 2;
	if (nums[k] == target)
		return k;
	else if (nums[k] < target)
		return binarySearch(nums, target, k+1, end);
	else
		return binarySearch(nums, target, start, k-1);
}

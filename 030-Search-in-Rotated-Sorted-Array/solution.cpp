#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::search(vector<int>& nums, int target) {
	if (nums.empty()) return -1;
	return subsearch(nums, target, 0, nums.size()-1);
}

int Solution::subsearch(vector<int>& nums, int target, int start, int end) {
	if (start >= 0 && target == nums[start]) return start;
	else if (end < nums.size() && target == nums[end]) return end;
	if (start >= end) return -1;
	int rst = -1;
	if (nums[end] < nums[start]) {
		// with rotation
		if (target > nums[start] && target < nums[end])
			return -1;
		int k = (start + end) / 2;
		if (nums[k] == target)
			return k;
		rst = subsearch(nums, target, start, k-1);
		if (rst < 0 && (nums[k] > nums[end] || nums[k] < target))
			rst = subsearch(nums, target, k+1, end);
	} else {
		// without rotation
		if (target < nums[start] || target > nums[end])
			return -1;
		int k = (start + end) / 2;
		if (nums[k] == target)
			return k;
		else if (nums[k] > target)
			rst = subsearch(nums, target, start, k-1);
		else  if (nums[k] < target)
			rst = subsearch(nums, target, k+1, end);
	}
	return rst;
}

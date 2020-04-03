#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::removeElement(vector<int>& nums, int val) {
	if (nums.empty()) return 0;
	int start = 0, end = nums.size()-1;
	while (start < end) {
		while (start < end && nums[end] == val)
			end--;
		if (start == end)
			break;
		if (nums[start] == val) {
			swap(nums[start], nums[end]);
			start++;
			end--;
		} else
			start++;
	}
	if (nums[start] == val)
		return start;
	else
		return start + 1;
}

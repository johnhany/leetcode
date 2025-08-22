#include "solution.hpp"


int Solution::longestConsecutive(vector<int>& nums) {
	if (nums.empty()) return 0;
	sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());

	int maxLen = 1, len = 1;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i-1] + 1 == nums[i]) {
			len++;
		} else {
			maxLen = max(maxLen, len);
			len = 1;
		}
	}
	return max(maxLen, len);
}

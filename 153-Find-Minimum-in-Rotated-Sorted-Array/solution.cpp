#include "solution.hpp"


int Solution::findMin(vector<int>& nums) {
	if (nums.size() == 0) return 0;
	int left = 0, right = nums.size()-1, mid = 0;
	while (left < right) {
		if (nums[right] > nums[left])
			return nums[left];
		mid = (left + right) / 2;
		if (nums[mid] > nums[right])
			left = mid+1;
		else
			right = mid;
	}
	return nums[left];
}

#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::singleNonDuplicate(vector<int>& nums) {
	int left=0, right=nums.size()-1;
	while (left<right) {
		int mid = (left+right)/2;
		if (mid%2==0) {
			if (nums[mid] == nums[mid+1])
				left = mid+2;
			else
				right = mid;
		} else {
			if (nums[mid] == nums[mid-1])
				left = mid+1;
			else
				right = mid-1;
		}
	}
	return nums[left];
}

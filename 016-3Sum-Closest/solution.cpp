#include "solution.hpp"
#include <limits.h>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::threeSumClosest(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int sum = 0;
	int closest_sum = nums[0] + nums[1] + nums[2];
	for(int i=0; i<nums.size()-1; i++) {
        int left = i+1;
        int right = nums.size()-1;
        while (left < right) {
			sum = nums[left] + nums[right] + nums[i];
			if (sum == target){
				return sum;
			} else if (abs(sum-target) < abs(closest_sum-target)) {
				closest_sum = sum;
				left++;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
     }
     return closest_sum;
}

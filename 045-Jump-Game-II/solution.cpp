#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::jump(vector<int>& nums) {
	int nextStep = 0, jumps = 0, reach = 0;
    int n = nums.size();
    for (int i = 0; i < n-1; i++) {
        reach = max(reach, i+nums[i]);
        if (reach == n-1)
            return jumps+1;
        else if (i == nextStep) {
            jumps++;
            nextStep = reach;
        }
    }
    return jumps;
}

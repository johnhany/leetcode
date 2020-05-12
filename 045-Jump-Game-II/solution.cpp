#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::jump(vector<int>& nums) {
	int cur = 0, jumps = 0, mx = 0;
    int n = nums.size();
    for (int i = 0; i < n-1; i++) {
        mx = max(mx, i+nums[i]);
        if (mx == n-1)
            return jumps+1;
        else if (i == cur) {
            jumps++;
            cur = mx;
        }
    }
    return jumps;
}

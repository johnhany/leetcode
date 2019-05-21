#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::canJump(vector<int>& nums) {
	if (nums.empty()) return false;
    else if (nums.size() == 1) return true;
    if (nums[0] == 0) return false;
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] > 0) {
            ++i;
            continue;
        }
        bool skip = false;
        for (int j = i-1; j >=0; --j)
            if (nums[j] > i-j || (i == nums.size()-1 && nums[j] >= i-j))
                skip = true;
        if (skip)
            ++i;
        else
            return false;
    }
    return true;
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::sortColors(vector<int>& nums) {
    if (nums.empty() || nums.size() == 1) return;
    else if (nums.size() == 2 && nums[0] > nums[1]) {
        std::swap(nums[0], nums[1]);
        return;
    }
    int head = 0, mid = 1, tail = nums.size()-1;
    while (true) {
        while (head < nums.size() && nums[head] == 0) ++head;
        while (tail >= 0 && nums[tail] == 2) --tail;
        if (head >= mid)
            mid = head + 1;
        if (head >= tail)
            break;
        if (nums[tail] == 0 || nums[head] == 2) {
            std::swap(nums[head], nums[tail]);
        } else {
            if (mid >= tail)
                break;
            while (mid < tail && nums[mid] != 0 && nums[mid] != 2)
                ++mid;
            if (mid < tail && nums[mid] == 0) {
                std::swap(nums[head], nums[mid]);
            }
            if (mid < tail && nums[mid] == 2) {
                std::swap(nums[tail], nums[mid]);
            }
        }
    }
    return;
}

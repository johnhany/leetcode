#include "solution.hpp"

bool Solution::canJump(vector<int>& nums) {
    if (nums[0] == 0) {
        if (nums.size() == 1) {
            return true;
        } else {
            return false;
        }
    }
    int reach = nums[0];
    for (int i=1; i<nums.size(); i++) {
        reach = max(reach-1, nums[i]);
        if (reach == 0 && i < nums.size()-1) {
            return false;
        }
    }
    return true;
}

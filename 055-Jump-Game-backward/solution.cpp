#include "solution.hpp"

bool Solution::canJump(vector<int>& nums) {
    int n=nums.size();
    int goal = n-1;
    for (int i=n-1; i>=0; i--) {
        if (nums[i]+i >= goal)
            goal = i;
    }
    return goal == 0;
}

#include "solution.hpp"

int Solution::firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    vector<bool> table(n+1, false);
    for (int i=0; i<n; i++) {
        if (nums[i]>0 && nums[i]<=n) {
            table[nums[i]] = true;
        }
    }
    for (int i=1; i<=n; i++) {
        if (!table[i])
            return i;
    }
    return n+1;
}


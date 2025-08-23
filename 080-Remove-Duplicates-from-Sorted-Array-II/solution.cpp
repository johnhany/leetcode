#include "solution.hpp"

// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/gong-shui-san-xie-guan-yu-shan-chu-you-x-glnq/

int Solution::removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    if (n < 2)
        return n;
    int len=2;
    for (int i=2; i<n; i++) {
        if (nums[len-2] != nums[i])
            nums[len++] = nums[i];
    }
    return len;
}

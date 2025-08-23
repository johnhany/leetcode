#include "solution.hpp"


// https://leetcode-cn.com/problems/house-robber-ii/solution/da-jia-jie-she-ii-by-leetcode-solution-bwja/

int Solution::subRob(vector<int>& nums) {
    if (nums.empty()) return 0;
    int n = nums.size();
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = nums[0];
    for (int i = 2; i <= n; i++) {
        dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);
    }
    return dp[n];
}

int Solution::rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    else if (nums.size() == 1) return nums[0];
    vector<int>::const_iterator s1 = nums.begin();
    vector<int>::const_iterator e1 = nums.begin()+nums.size()-1;
    vector<int>::const_iterator s2 = nums.begin()+1;
    vector<int>::const_iterator e2 = nums.end();
    vector<int> nums1(s1, e1), nums2(s2, e2);
    return max(subRob(nums1), subRob(nums2));
}

#include "solution.hpp"

// https://leetcode.cn/problems/unique-binary-search-trees/solution/hua-jie-suan-fa-96-bu-tong-de-er-cha-sou-suo-shu-b/

int Solution::numTrees(int n) {
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i < n + 1; i++)
        for(int j = 1; j < i + 1; j++)
            dp[i] += dp[j-1] * dp[i-j];

    return dp[n];
}

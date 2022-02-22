#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::numTrees(int n) {
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i < n + 1; i++)
        for(int j = 1; j < i + 1; j++)
            dp[i] += dp[j-1] * dp[i-j];

    return dp[n];
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
	if(startFuel>=target)
        return 0;
    int n=stations.size();
    vector<long> dp(n+1, 0);
    dp[0]=startFuel;

    for(int i=1;i<n+1;++i)
    {
        for(int j=i;j>=1;--j)
        {
            if(dp[j]>=stations[i-1][0])  //在第i站不加油
                dp[j]=dp[j];

            if(dp[j-1]>=stations[i-1][0]) //在第j站加油
                dp[j]=max(dp[j],dp[j-1]+stations[i-1][1]);
        }
    }

    for(int j=0;j<=n;++j)
        if(dp[j]>=target)
            return j;
    return -1;
}

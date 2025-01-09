#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::maxProfit(vector<int>& prices) {
	int n = prices.size();
	int buyPrice = -prices[0];
	int profit = 0;
	for (int i=1; i<n; i++) {
		profit = max(profit, prices[i]+buyPrice);
		buyPrice = max(-prices[i], buyPrice);
	}
	return profit;
}

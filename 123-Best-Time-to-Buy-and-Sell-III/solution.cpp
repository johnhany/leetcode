#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::maxProfit(vector<int>& prices) {
	if (prices.size() < 2) return 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
	int int_min = ~int_max;
	int buy1 = int_min, buy2 = int_min, sell1 = 0, sell2 = 0;
	for (int i = 0; i < prices.size(); i++) {
		buy1 = max(buy1, -prices[i]);
		sell1 = max(sell1, buy1 + prices[i]);
		buy2 = max(buy2, sell1 - prices[i]);
		sell2 = max(sell2, buy2 + prices[i]);
	}
	return sell2;
}

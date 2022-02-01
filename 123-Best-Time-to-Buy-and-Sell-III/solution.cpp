#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii/solution/mai-mai-gu-piao-de-zui-jia-shi-ji-iii-by-wrnt/

int Solution::maxProfit(vector<int>& prices) {
	int n = prices.size();
	int buy1 = -prices[0], buy2 = -prices[0];
	int sell1 = 0, sell2 = 0;
	for (int i=1; i<n; i++) {
		buy1 = max(buy1, -prices[i]);
		sell1 = max(sell1, buy1+prices[i]);
		buy2 = max(buy2, sell1-prices[i]);
		sell2 = max(sell2, buy2+prices[i]);
	}
	return sell2;
}

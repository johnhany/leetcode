#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii/solution/zui-jian-dan-2-ge-bian-liang-jie-jue-suo-71fe/

int Solution::maxProfit(vector<int>& prices, int fee) {
	int buy = INT_MIN, sell = 0;
	for (auto& p : prices)
	{
		int buynow = max(buy, sell - p - fee);
		int sellnow = max(sell, buy + p);
		buy = buynow;
		sell = sellnow;
	}

	return sell;
}

#include "solution.hpp"

// https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-iii/solution/zui-jian-dan-2-ge-bian-liang-jie-jue-suo-71fe/

int Solution::maxProfit(int k, vector<int>& prices) {
	vector<int> buy(k + 1, INT_MIN), sell(k + 1, 0);
	for (auto& p : prices)
	{
		for (int i = 1; i <= k; ++i)
		{
			buy[i] = max(buy[i], sell[i - 1] - p);
			sell[i] = max(sell[i], buy[i] + p);
		}
	}
	return sell[k];
}

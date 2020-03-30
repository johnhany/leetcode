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
	int rst = 0;
	for (int i = 1; i < prices.size(); i++) {
		if (prices[i] > prices[i-1])
			rst += prices[i] - prices[i-1];
	}
	return rst;
}

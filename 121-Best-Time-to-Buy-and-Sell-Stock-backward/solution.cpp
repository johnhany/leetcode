#include "solution.hpp"


int Solution::maxProfit(vector<int>& prices) {
	if (prices.size() < 2) return 0;
	int int_max = (int)((~((unsigned int) 0)) >> 1);
    int int_min = ~int_max;
	int maxValue = int_min, maxProfit = int_min;
	for (int i = prices.size()-1; i >= 0; i--) {
		maxValue = max(maxValue, prices[i]);
		maxProfit = max(maxValue - prices[i], maxProfit);
	}
	return maxProfit;
}

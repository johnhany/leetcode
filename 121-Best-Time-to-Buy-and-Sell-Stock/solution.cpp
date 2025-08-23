#include "solution.hpp"


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

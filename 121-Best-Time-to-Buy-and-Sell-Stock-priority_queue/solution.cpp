#include "solution.hpp"


int Solution::maxProfit(vector<int>& prices) {
    if (prices.size() < 2) return 0;
    std::priority_queue<int, std::vector<int>, std::greater<int> > q;
    q.push(prices[0]);
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
        int curProfit = prices[i] - q.top();
        if (curProfit > maxProfit)
            maxProfit = curProfit;
        q.push(prices[i]);
    }
    return maxProfit;
}

#include "solution.hpp"


int Solution::maxProfit(vector<int>& prices) {
    int rst = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i-1])
            rst += prices[i] - prices[i-1];
    }
    return rst;
}

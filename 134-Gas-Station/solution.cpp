#include "solution.hpp"


int Solution::canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int sum = 0, curSum = 0, index = 0;
    for (int i = 0; i < gas.size(); i++) {
        gas[i] -= cost[i];
        sum += gas[i];
        curSum += gas[i];
        if (curSum < 0) {
            curSum = 0;
            index = i+1;
        }
    }
    return sum < 0 ? -1 : index;
}

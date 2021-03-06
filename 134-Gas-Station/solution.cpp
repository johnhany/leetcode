#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


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

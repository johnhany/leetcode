#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<vector<int>> Solution::threeSum(vector<int>& nums) {
	vector<vector<int>> results;
	set<int> unums;
	for (vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++)
		unums.insert(*itr);
	int left = 0, right = unums.size() - 1;

}

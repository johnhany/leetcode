#include "solution.hpp"

vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target) {
	vector<vector<int>> rst;
	vector<int> path;
	subCombination(candidates, rst, target, 0, path);
	return rst;
}

void Solution::subCombination(vector<int>& candidates, vector<vector<int>>& rst, int target, int start, vector<int>& path) {
	if (target == 0) {
		rst.push_back(path);
		return;
	}
	for (int i = start; i < candidates.size(); i++) {
		if (candidates[i] <= target) {
			path.push_back(candidates[i]);
			subCombination(candidates, rst, target - candidates[i], i, path);
			path.pop_back();
		}
	}
	return;
}

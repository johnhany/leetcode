#include "solution.hpp"

vector<vector<int>> Solution::combinationSum2(vector<int>& candidates, int target) {
	vector<vector<int>> rst;
	vector<int> path;
	sort(candidates.begin(), candidates.end());
	subCombination(candidates, rst, target, 0, path);
	return rst;
}

void Solution::subCombination(vector<int>& candidates, vector<vector<int>>& rst, int target, int start, vector<int>& path) {
	if (target == 0) {
		rst.push_back(path);
		return;
	}
	for (int i=start; i<(int)candidates.size(); i++) {
		if (candidates[i] <= target) {
			path.push_back(candidates[i]);
			subCombination(candidates, rst, target-candidates[i], i+1, path);
			path.pop_back();
			while (i+1 < (int)candidates.size() && candidates[i] == candidates[i+1]) {
				i++;
			}
		}
	}
	return;
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::combinationSum2(vector<int>& candidates, int target) {
	vector<vector<int>> rst;
	if (candidates.size() == 0) return rst;
	vector<int> path;
	sort(candidates.begin(), candidates.end());
	subCombination(candidates, rst, target, 0, path);
	return rst;
}

void Solution::subCombination(vector<int>& candidates, vector<vector<int>>& rst, int target, int start, vector<int>& path) {
	for (int i = start; i < candidates.size(); i++) {
		if (candidates[i] > target)
			break;
		else {
			path.push_back(candidates[i]);
			if (target == candidates[i])
				rst.push_back(path);
			else
				subCombination(candidates, rst, target - candidates[i], i+1, path);
			path.pop_back();
			while (i+1 < candidates.size() && candidates[i] == candidates[i+1])
				i++;
		}
	}
	return;
}

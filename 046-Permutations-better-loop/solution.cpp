#include "solution.hpp"

vector<vector<int>> Solution::permute(vector<int>& nums) {
	if (nums.empty()) return vector<vector<int>>{};
	vector<vector<int>> v{ {nums[0]} };
	for (int i = 1; i < nums.size(); ++i) {
		int p = nums[i];
		vector<vector<int>> subset;
		for (auto x:v){
			for (int k = 0; k <= x.size(); ++k) {
				vector<int> tmp(begin(x), begin(x)+k);
				tmp.push_back(p);
				tmp.insert(end(tmp), begin(x)+k, end(x));
				subset.push_back(move(tmp));
			}
		}
		swap(subset, v);
	}
	return v;
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::subsets(vector<int>& nums) {
	if (nums.empty())
		return vector<vector<int>>{{}};
	else if (nums.size() == 1)
		return vector<vector<int>>{nums, {}};
	list<list<int>> tmp{{}};
	for (int i = 0; i < nums.size(); ++i) {
		int len = tmp.size();
		auto itr = tmp.begin();
		for (int j = 0; j < len; ++j, ++itr) {
			list<int> new_list(*itr);
			new_list.emplace_back(nums[i]);
			tmp.emplace_back(new_list);
		}
	}
	vector<vector<int>> rst;
	for (auto& a : tmp) {
		rst.emplace_back(std::make_move_iterator(std::begin(a)),
                         std::make_move_iterator(std::end(a)));
	}
	return rst;
}

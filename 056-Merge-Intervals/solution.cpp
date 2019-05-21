#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::merge(vector<vector<int>>& arr) {
	vector<vector<int>> rst;
    if (arr.empty()) return rst;
    sort(arr.begin(), arr.end(), [](const vector<int>& lhs, const vector<int>& rhs){
        if (lhs[0] < rhs[0]) return true;
        else if (lhs[0] > rhs[0]) return false;
        else if (lhs[1] < rhs[1]) return true;
        else return false;
    });
    rst.emplace_back(arr[0]);
    for (int i = 1; i < arr.size(); ++i) {
        auto tail = std::prev(rst.end());
        if (arr[i][0] <= (*tail)[1])
            (*tail)[1] = std::max(arr[i][1], (*tail)[1]);
        else
            rst.emplace_back(arr[i]);
    }
    return rst;
}

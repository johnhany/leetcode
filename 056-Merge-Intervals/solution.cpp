#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& lhs, const vector<int>& rhs){
        if (lhs[0] < rhs[0]) return true;
        else if (lhs[0] > rhs[0]) return false;
        else if (lhs[1] < rhs[1]) return true;
        else return false;
    });
    vector<vector<int>> rst;
    int n = intervals.size();
    int l = intervals[0][0], r = intervals[0][1];
    for (int i=1; i<n; i++) {
        if (r >= intervals[i][0]) {
            r = max(r, intervals[i][1]);
        } else {
            rst.push_back({l, r});
            l = intervals[i][0];
            r = intervals[i][1];
        }
    }
    rst.push_back({l, r});
    return rst;
}

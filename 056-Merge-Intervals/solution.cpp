#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
    vector<vector<int>> rst;

    sort(intervals.begin(), intervals.end(), [](vector<int>& lhs, vector<int>& rhs){
        if (lhs[0] < rhs[0]) return true;
        else if (lhs[0] > rhs[0]) return false;
        else if (lhs[1] < rhs[1]) return true;
        else return false;
    });

    int left = intervals[0][0], right = intervals[0][1];
    for (int i=1; i<intervals.size(); i++) {
        if (right >= intervals[i][0]) {
            right = max(right, intervals[i][1]);
        } else {
            rst.push_back(vector<int>{left, right});
            left = intervals[i][0];
            right = intervals[i][1];
        }
    }
    rst.push_back(vector<int>{left, right});
    return rst;
}

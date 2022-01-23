#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<string> Solution::generateParenthesis(int n) {
	if (n==0)
		return {};
	vector<string> rst{"("}, q;

	while (true) {
		if (rst.front().length() == 2*n)
			break;
		q.clear();
		for (string& c: rst) {
			int lp = std::count(c.begin(), c.end(), '(');
			int rp = std::count(c.begin(), c.end(), ')');
			if (lp < n) {
				q.emplace_back(c + "(");
			}
			if (lp > rp) {
				q.emplace_back(c + ")");
			}
		}
		rst = q;
	}
	return rst;
}

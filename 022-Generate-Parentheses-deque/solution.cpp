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
	vector<string> rst;
	deque<string> q;
	q.emplace_back("(");
	while (true) {
		if (q.front().length() == 2*n)
			break;
		string c = q.front();
		int lp = std::count(c.begin(), c.end(), '(');
		int rp = std::count(c.begin(), c.end(), ')');
		if (lp < n) {
			q.emplace_back(c + "(");
		}
		if (lp > rp) {
			q.emplace_back(c + ")");
		}
		
		q.pop_front();
	}
	while (!q.empty()) {
		rst.emplace_back(std::move(q.front()));
		q.pop_front();
	}
	return rst;
}

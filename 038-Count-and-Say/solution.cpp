#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

string Solution::countAndSay(int n) {
	string pre = "1";
	string cur;
	while (--n) {
		int count = 1;
		if (pre.size() == 1) {
			cur = "1" + pre;
		} else {
			cur = "";
			for (int i = 1; i < pre.size(); ++i) {
				if (pre[i] == pre[i-1]) {
					++count;
				} else {
					cur += to_string(count);
					cur += pre[i-1];
					count = 1;
				}
			}
			cur += to_string(count);
			cur += pre.back();
		}
		pre = cur;
	}
	return pre;
}


#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://leetcode-cn.com/problems/maximum-swap/solution/tan-xin-zhao-shen-hou-zui-da-zhi-suo-zai-9pyw/

int Solution::maximumSwap(int num) {
	string str = to_string(num);
	int n = str.size();
	vector<int> res(n, n);
	int index = n, maxnum = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (str[i] - '0' > maxnum) {
			maxnum = str[i] - '0';
			index = i;
		} else if (str[i] - '0' < maxnum){
			res[i] = index;
		}
	}
	for (int i = 0; i < n; i++) {
		if (res[i] != n) {
			swap(str[i], str[res[i]]);
			break;
		}
	}
	return stoi(str);
}

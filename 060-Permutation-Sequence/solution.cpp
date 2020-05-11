#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

string Solution::getPermutation(int n, int k) {
	string temp = "123456789";

	vector<int> indices;
	while (n) {
		int f = fact[n-1];
		int idx = k % f == 0 ? k/f - 1 : k/f;
		k = k-(idx*f);
		n--;
		indices.push_back(idx);
	}

	string rst = "";
	for(int i : indices){
		rst += temp[i];
		temp.erase(i,1);
	}
	return rst;
}

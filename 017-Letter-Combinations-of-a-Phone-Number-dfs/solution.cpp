#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<char> Solution::getAlpha(char num) {
	vector<char> res;
	vector<pair<int,int>> arr{{0,2},{3,5},{6,8},{9,11},{12,14},{15,18},{19,21},{22,25}}; 
	int times = num-'2';
	for (int i=arr[times].first; i<=arr[times].second; i++ )
	{
		res.push_back(i+'a');
	}
	return res;
}

void Solution::dfs(vector<string>& rst, string& digits, string last, int n, int i) {
	vector<char> cur = getAlpha(digits[i]);
	if (i == n-1) {
		for (char c: cur) {
			rst.emplace_back(last + c);
		}
		return;
	} else {
		for (char c: cur) {
			dfs(rst, digits, last + c, n, i+1);
		}
	}
}

vector<string> Solution::letterCombinations(string digits) {
	if (digits.empty())
		return {};
	vector<string> rst;
	dfs(rst, digits, "", digits.length(), 0);
	return rst;
}

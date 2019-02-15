#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::romanToInt(string s) {
	vector<char> symbols{'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	vector<int> values{1, 5, 10, 50, 100, 500, 1000};

	int result = 0;
	std::vector<char>::iterator itr;
	for (int i = 0; i < s.size(); i++) {
		itr = find(symbols.begin(), symbols.end(), s[i]);
		if (itr != symbols.end()) {
			int idx = std::distance(symbols.begin(), itr);
			if (i < s.size()-1 && idx < 5 && (s[i+1] == symbols[idx+1] || s[i+1] == symbols[idx+2]))
				result -= values[idx];
			else
				result += values[idx];
		}
	}
	return result;
}

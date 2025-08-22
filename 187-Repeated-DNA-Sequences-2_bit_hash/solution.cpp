#include "solution.hpp"
#include <cmath>


vector<string> Solution::findRepeatedDnaSequences(string s) {
	vector<string> rst;
	if (s.size() <= 10) return rst;
	int mask = 0x7ffffff, cur = 0;
	unordered_map<int, int> hash;
	for (int i = 0; i < 9; i++)
		cur = (cur << 3) | (s[i] & 7);
	for (int i = 9; i < s.size(); i++) {
		cur = ((cur & mask) << 3) | (s[i] & 7);
		auto itr = hash.find(cur);
		if (itr != hash.end()) {
			if (itr->second == 1)
				rst.push_back(s.substr(i-9, 10));
			itr->second++;
		} else
			hash.insert({cur, 1});
	}
	return rst;
}

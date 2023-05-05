#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<string>> Solution::groupAnagrams(vector<string>& strs) {
	unordered_map<string, vector<string>> table;
	for (string& s : strs) {
		table[countSort(s)].push_back(s);
	}
	vector<vector<string>> rst;
	for (auto& itr : table) {
		rst.push_back(itr.second);
	}
	return rst;
}

string Solution::countSort(string s) {
	vector<int> count(26, 0);
	for (char c : s) {
		count[c-'a']++;
	}
	string key;
	for (int i=0; i<26; i++) {
		key += string(count[i], 'a'+i);
	}
	return key;
}

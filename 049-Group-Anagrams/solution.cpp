#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<string>> Solution::groupAnagrams(vector<string>& strs) {
	unordered_map<string, vector<string>> hash;
	for (auto s : strs) {
		hash[countSort(s)].emplace_back(s);
	}
	vector<vector<string>> anagrams;
	for (auto p : hash) {
		anagrams.emplace_back(p.second);
	}
	return anagrams;
}

string Solution::countSort(string s) {
	int count[26] = {0};
	for (char c : s) {
		++count[c-'a'];
	}
	string t;
	for (int c = 0; c < 26; c++) {
		t += string(count[c], c+'a');
	}
	return t;
}

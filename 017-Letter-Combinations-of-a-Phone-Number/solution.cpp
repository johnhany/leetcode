#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<string> Solution::letterCombinations(string digits) {
	map<int, vector<char>> phone;
	for (int i = 2, lt = 0; i < 10; i++) {
		int stride = (i == 7 || i == 9) ? 4 : 3;
		vector<char> lts;
		for (int j = 0; j < stride; j++) {
			lts.emplace_back('a'+lt);
			lt++;
		}
		phone.insert(pair<int, vector<char>>(i, lts));
	}
	deque<string> letters;
	vector<string> result;
	map<int, vector<char>>::iterator button;
	if (digits.size() > 0) {
		button = phone.find(digits[0]-'0');
		for (vector<char>::iterator cand = button->second.begin(); cand != button->second.end(); cand++) {
			letters.emplace_back(string(1, *cand));
		}
	} else
		return result;
	for (int i = 1; i < digits.size(); i++) {
		button = phone.find(digits[i]-'0');
		int dsize = letters.size();
		for (int j = 0; j < dsize; j++) {
			string prev = letters.front();
			letters.pop_front();
			for (vector<char>::iterator cand = button->second.begin(); cand != button->second.end(); cand++) {
				letters.emplace_back(prev + *cand);
			}
		}
	}
	while (!letters.empty()) {
		result.emplace_back(std::move(letters.front()));
		letters.pop_front();
	}
	return result;
}

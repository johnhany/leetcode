#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::findSubstring(string s, vector<string>& words) {
	if (words.empty()) return {};
	int len = words[0].size();
	int n = words.size();
	if (n*len > s.size()) return {};
	unordered_map<string, int> hash, visit;
	for (string w : words) {
		hash[w]++;
	}
	vector<int> rst;
	int end = s.size() - n*len + 1;
	for (int i = 0; i < len; i++) {
		visit.clear();
		int left = i, found = 0;
		for (int j = i; j <= s.size()-len; j += len) {
			string w = s.substr(j, len);
			if (hash.find(w) != hash.end()) {
				visit[w]++;
				if (visit[w] <= hash[w])
					found++;
				else {
					while (visit[w] > hash[w]) {
						string u = s.substr(left, len);
						visit[u]--;
						if (visit[u] < hash[u])
							found--;
						left += len;
					}
				}
				if (found == n) {
					rst.push_back(left);
					visit[s.substr(left, len)]--;
					found--;
					left += len;
				}
			} else {
				visit.clear();
				found = 0;
				left = j + len;
			}
		}
	}
	return rst;
}

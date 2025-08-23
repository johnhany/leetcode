#include "solution.hpp"


bool Solution::checkPalindrome(string s, int start, int end) {
    while (start < end)
        if (s[start++] != s[end--])
            return false;
    return true;
}

void Solution::subPartition(vector<vector<string>>& q, string s, int start, vector<string>& cur) {
    if (start >= s.size()) {
        q.push_back(cur);
        return;
    }
    for (int i = 1; start + i <= s.size(); i++) {
        if (checkPalindrome(s, start, start+i-1)) {
            cur.push_back(s.substr(start, i));
            subPartition(q, s, start+i, cur);
            cur.pop_back();
        }
    }
}

vector<vector<string>> Solution::partition(string s) {
    if (s.empty()) return {};
    vector<vector<string>> rst;
    vector<string> cur;
    subPartition(rst, s, 0, cur);
    return rst;
}

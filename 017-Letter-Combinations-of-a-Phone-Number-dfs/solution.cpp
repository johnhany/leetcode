#include "solution.hpp"

string Solution::getLetters(char num) {
    string letters;
    vector<pair<int,int>> arr{{0,2},{3,5},{6,8},{9,11},{12,14},{15,18},{19,21},{22,25}};
    num -= '2';
    for (int k=arr[num].first; k<=arr[num].second; k++) {
        letters.push_back('a'+k);
    }
    return letters;
}

void Solution::dfs(vector<string>& rst, string& digits, string last, int n, int i) {
    string cand = getLetters(digits[i]);
    if (i == n-1) {
        for (char c : cand) {
            rst.push_back(last + c);
        }
    } else {
        for (char c : cand) {
            dfs(rst, digits, last + c, n, i+1);
        }
    }
    return;
}

vector<string> Solution::letterCombinations(string digits) {
    if (digits.empty()) {
        return {};
    }
    vector<string> rst;
    dfs(rst, digits, "", digits.size(), 0);
    return rst;
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::plusOne(vector<int>& digits) {
	vector<int> tmp;
    int carry = 1;
    for (int i = digits.size()-1; i >= 0; --i) {
        if (carry && digits[i] + carry > 9) {
            tmp.emplace_back(0);
        } else if (carry) {
            tmp.emplace_back(digits[i]+carry);
            carry = 0;
        } else {
            tmp.emplace_back(digits[i]);
        }
    }
    if (carry)
        tmp.emplace_back(1);
    std::reverse(tmp.begin(), tmp.end());
    return tmp;
}

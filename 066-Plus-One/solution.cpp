#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::plusOne(vector<int>& digits) {
	vector<int> rst;
    int carry = 1;
    for (int i=digits.size()-1; i>=0; i--) {
        int a = digits[i] + carry;
        rst.push_back(a%10);
        carry = a/10;
    }
    if (carry)
        rst.push_back(carry);
    reverse(rst.begin(), rst.end());
    return rst;
}

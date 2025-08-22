#include "solution.hpp"

string Solution::multiply(string num1, string num2) {
	if (num1.size() < num2.size())
		swap(num1, num2);
	int n = num1.size(), m = num2.size();
	vector<vector<int>> table(m, vector<int>(n+m, 0));
	for (int j = m-1; j >= 0; j--) {
		int carry = 0;
		for (int i = n-1; i >= 0; i--) {
			int a = num1[i] - '0';
			int b = num2[j] - '0';
			int mul = a * b + carry;
			int car = mul / 10;
			int res = mul - car * 10;
			table[m-1-j][i+j+1] = res;
			carry = car;
		}
		table[m-1-j][j] = carry;
	}
	int carry = 0;
	string rst;
	for (int i = n+m-1; i >= 0; i--) {
		int sum = carry;
		for (int j = 0; j < m; j++) {
			sum += table[j][i];
		}
		int car = sum / 10;
		int res = sum - car * 10;
		rst.push_back(res + '0');
		carry = car;
	}
	while (!rst.empty() && rst.back() == '0')
		rst.pop_back();
	if (rst.size() == 0)
		return "0";
	else {
		reverse(rst.begin(), rst.end());
		return rst;
	}
}


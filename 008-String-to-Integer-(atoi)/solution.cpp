#include "solution.hpp"
#include <limits.h>


int Solution::myAtoi(string s) {
	int n = s.length();
	int y = 0;
	bool isNeg = false;
	int int_max = int((~(unsigned int)0) >> 1);
	int int_min = int(~int_max);
	int i = 0;
	for (; i<n && s[i]==' '; i++);
	if (s[i] == '-') {
		isNeg = true;
		i++;
	} else if (s[i] == '+') {
		isNeg = false;
		i++;
	}
	for(; i<n && s[i] >= '0' && s[i] <= '9'; i++) {
		int v = s[i] - '0';
		if ((int_min+v)/10 > y) {
			y = int_min;
			break;
		}
		y = y*10 - v;
	}
	if (!isNeg && y <= int_min+1) {
		return int_max;
	} else if (!isNeg) {
		return -y;
	} else
		return y;
}

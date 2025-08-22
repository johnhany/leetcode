#include "solution.hpp"


string Solution::intToRoman(int num) {
	// const char roman[8] = {'I', 'V', 'X', 'L', 'C', 'D', 'M', '\0'};
	const char *roman[] = {"I", "V", "X", "L", "C", "D", "M", ""};
	const int base[8] = {1, 5, 10, 50, 100, 500, 1000, 5000};
	int unit, unit_idx, times, p = 6;
	string out = "";
	while (num && p>=0) {
		if (num >= base[p] && num < base[p+1]) {
			unit_idx = (p/2)*2;
			unit = base[unit_idx];
			if (num < base[p+1] - unit) {
				if (num >= 5 * unit) {
					out += *(roman+p);
				}
				times = num / unit;
				if (times >= 5)
					times -= 5;
				for (int t = 0; t < times; t++)
					out += *(roman+unit_idx);
			} else {
				out += *(roman+unit_idx);
				out += *(roman+p+1);
			}
			num -= (num / unit) * unit;
		} else {
			p--;
		}
	}
	return out;
}

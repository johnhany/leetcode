#include "solution.hpp"


bool Solution::isPalindrome(string s) {
	string t;
	for (char c: s) {
		if (c>='a' && c<='z' || c>='0' && c<='9')
			t.push_back(c);
		else if (c>='A' && c<='Z')
			t.push_back(c-'A'+'a');
	}
	int i=0, j=t.size()-1;
	while (i<j && t[i]==t[j]) {
		i++;
		j--;
	}
	return i>=j;
}

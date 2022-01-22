#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::tableFunc(char str){
        if(str=='I') return 1;
        else if(str=='V') return 5;
        else if(str=='X') return 10;
        else if(str=='L') return 50;
        else if(str=='C') return 100;
        else if(str=='D') return 500;
		else if(str=='M') return 1000;
        else return 0;
    }

int Solution::romanToInt(string s) {
	int rst = tableFunc(s.back());
	for (int i=s.length()-2; i>=0; i--) {
		if (tableFunc(s[i]) < tableFunc(s[i+1])) {
			rst -= tableFunc(s[i]);
		} else {
			rst += tableFunc(s[i]);
		}
	}
	return rst;
}

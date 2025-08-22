#include "solution.hpp"


string Solution::intToRoman(int num) {
	string LuT[]={
		"","I","II","III","IV","V","VI","VII","VIII","IX",
        "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC",
        "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",
        "","M","MM","MMM",""
	};
    return LuT[num/1000+30] + LuT[(num/100)%10+20]
        + LuT[(num/10)%10+10] + LuT[num%10];
}

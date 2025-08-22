#include "solution.hpp"
#include <cstring>

string Solution::multiply(string num1, string num2) {
	if (num1=="0"||num2=="0") return "0";
	char a[num1.length()+num2.length()];
	int i=num1.length()-1,j,co,t,c=0,le=219;
	// for (co=0;co<220;co++) a[co]='0';
	memset(a, '0', num1.length()+num2.length());
	for (;i>=0;i--){
		co=num1.length()+num2.length()-num1.length()+i;
		for (j=num2.length()-1;j>=0;j--){
			t=c+(num1[i]-'0')*(num2[j]-'0');
			c=((a[co]-'0')+t)/10;
			a[co]=(((a[co]-'0')+t)%10+'0');
			// cout<<a[co]<<'-'<<co<<  ' ';
			co--;
		}
		while(c>0){
			t=c;
			c=((a[co]-'0')+t)/10;
			a[co]=(((a[co]-'0')+t)%10+'0');
			co--;
		}
		if(le>co) le=co;
	}
	return string(&a[le+1],&a[num1.length()+num2.length()]);
}


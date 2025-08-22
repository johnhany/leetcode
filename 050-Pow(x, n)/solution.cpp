#include "solution.hpp"

double Solution::subPow(double x, int n) {
	if(x==1.0)
		return 1;
	if(n==0)
		return 1;
	if(n==1)
		return x;
	if(n&1)
		return (x*subPow(x*x,n>>1));
	else
		return subPow(x*x,n>>1);
}

double Solution::myPow(double x, int n) {
	int s=0;
	if(n<0){
		s=1;
		n=abs(n);
	}
	double ans;
	if(n%2==0)
		ans=subPow(x,n/2)*subPow(x,n/2);
	else
		ans=subPow(x,n/2)*subPow(x,n/2)*x;
	if(s==1)
		return (1/ans);
	else
		return ans;
}

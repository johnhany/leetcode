#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::sortColors(vector<int>& nums) {
    int a=0,b=0,c=0,i;
    int n=nums.size();
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
            a+=1;
        else if(nums[i]==1)
            b+=1;
        else
            c+=1;
    }
    int k=0;
    for(i=0;i<a;i++){
        nums[k]=0;
        k++;
    }
    for(i=0;i<b;i++){
        nums[k]=1;
        k++;
    }
    for(i=0;i<c;i++){
        nums[k]=2;
        k++;
    }
    return;
}

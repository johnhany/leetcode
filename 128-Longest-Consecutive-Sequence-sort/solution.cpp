#include "solution.hpp"


int Solution::longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;
    sort(nums.begin(),nums.end());
    int curLen=1;
    int maxLen=1;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]) continue;
        if(nums[i]+1==nums[i+1]){
            curLen++;
            maxLen=max(curLen,maxLen);
        } else {
            curLen=1;
        }
    }
    return maxLen;
}

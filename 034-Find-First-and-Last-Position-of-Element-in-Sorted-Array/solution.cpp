#include "solution.hpp"

vector<int> Solution::searchRange(vector<int>& nums, int target) {
    if (nums.empty()) return vector<int>{-1, -1};
    int low = subsearch(nums, (float)target-0.5, 0, nums.size()-1);
    int high = subsearch(nums, (float)target+0.5, 0, nums.size()-1);
    if (low == high)
        return vector<int>{-1, -1};
    else
        return vector<int>{low+1, high};
}

int Solution::subsearch(vector<int>& nums, float target, int start, int end) {
    if (target < nums[start])
        return start-1;
    else if (target > nums[end])
        return end;
    int k = (start + end) / 2;
    if (nums[k] > target)
        return subsearch(nums, target, start, k-1);
    else
        return subsearch(nums, target, k+1, end);
}

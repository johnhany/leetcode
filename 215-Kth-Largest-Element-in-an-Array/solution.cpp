#include "solution.hpp"


int Solution::findKthLargest(vector<int>& nums, int k) {
	int n = nums.size();
	if (n==1) return nums[0];
	int big = nums[0], small = big;
	vector<int> left;
	vector<int> right;
	for (int i = 1; i < n; i++) {
		if (nums[i] > big)
			big = nums[i];
		if (nums[i] < small)
			small = nums[i];
	}
	const double mid = (big + small) / 2.0; // use the medium as partition pivot
	for (int i = 0; i < n; i++) {
		if (nums[i] <= mid)
			left.push_back(nums[i]);
		else
			right.push_back(nums[i]);
	}
	if (left.size() == n) return nums[0]; // all the elements are equal.
	if (left.size() >= n-k+1)
		return findKthLargest(left, k-right.size());
	else
		return findKthLargest(right, k);
}

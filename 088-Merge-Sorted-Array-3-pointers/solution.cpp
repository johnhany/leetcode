#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i = m - 1, j = n - 1, k = m + n - 1;
	while(i >= 0 && j >= 0) {
		if(nums1[i] > nums2[j])
			nums1[k--] = nums1[i--];
		else
			nums1[k--] = nums2[j--];
	}
	while(j >= 0)
		nums1[k--] = nums2[j--];
	return;
}

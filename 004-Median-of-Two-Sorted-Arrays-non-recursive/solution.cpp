#include "solution.hpp"


double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() > nums2.size()) {
		std::swap(nums1, nums2);
	}
	int m = nums1.size(), n = nums2.size();
	int low = 0, high = m, mid = (m+n+1)/2;
	int int_max = int((~(unsigned int)0) >> 1);
	int int_min = int(~int_max);
	while (low <= high) {
		int cut1 = (low+high)/2;
		int cut2 = mid-cut1;
		int left1 = (cut1==0)?int_min:nums1[cut1-1];
		int left2 = (cut2==0)?int_min:nums2[cut2-1];
		int right1 = (cut1==m)?int_max:nums1[cut1];
		int right2 = (cut2==n)?int_max:nums2[cut2];
		if (left1 <= right2 && left2 <= right1) {
			return (m+n)%2==0 ? (std::max(left1,left2)+std::min(right1,right2))/2.0 : std::max(left1,left2);
		} else if (right1 < left2) {
			low = cut1+1;
		} else {
			high = cut1-1;
		}
	}
	return 0.0;
}


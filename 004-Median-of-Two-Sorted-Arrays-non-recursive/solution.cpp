#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	if ((nums1.size() + nums2.size()) % 2 == 1) {
		return findKth(nums1, nums2, (nums1.size() + nums2.size() + 1) / 2);
	} else {
		return (findKth(nums1, nums2, (nums1.size() + nums2.size()) / 2) +
				findKth(nums1, nums2, (nums1.size() + nums2.size()) / 2 + 1)) / 2.0;
	}
}

int Solution::findKth(vector<int> a, vector<int> b, int k) {
	int a_start = 0, a_end = a.size(), b_start = 0, b_end = b.size();
	int k_cur = k;
	while(1) {
		if (a_end - a_start == 0) {
			return b[b_start + k_cur - 1];
		}
		if (b_end - b_start == 0) {
			return a[a_start + k_cur - 1];
		}
		if (k_cur == 1) {
			return min(a[a_start], b[b_start]);
		}
		int i = min(k_cur/2, a_end-a_start);
		int j = min(k_cur/2, b_end-b_start);
		if (a[a_start+i-1] < b[b_start+j-1]) {
			a_start += i;
			k_cur -= i;
		} else {
			b_start += j;
			k_cur -= j;
		}
	}
}


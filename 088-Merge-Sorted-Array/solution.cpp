#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	if (nums1.empty() || m == 0) {
		nums1 = nums2;
		return;
	} else if (nums2.empty() || n == 0)
		return;
	list<int> tmp;
	int i = 0, j = 0;
	while (true) {
		if (i < m && j < n) {
			if (nums1[i] < nums2[j]) {
				tmp.emplace_back(nums1[i]);
				i++;
			} else {
				tmp.emplace_back(nums2[j]);
				j++;
			}
		}
		if (i == m) {
			while (j < n) {
				tmp.emplace_back(nums2[j]);
				j++;
			}
			break;
		}
		if (j == n) {
			while (i < m) {
				tmp.emplace_back(nums1[i]);
				i++;
			}
			break;
		}
	}
	i = 0;
	for (auto a : tmp)
		nums1[i++] = a;
	return;
}

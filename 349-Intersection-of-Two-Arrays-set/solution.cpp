#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() > nums2.size())
		swap(nums1, nums2);
	unordered_set<int> A(nums1.begin(), nums1.end()), C;
	for (auto& i : nums2) {
		if (A.find(i) != A.end())
			C.insert(i);
	}
	return vector<int>(C.begin(), C.end());
}

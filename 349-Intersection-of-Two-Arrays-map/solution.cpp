#include "solution.hpp"
#include <cmath>


vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() > nums2.size())
		swap(nums1, nums2);
	unordered_map<int, int> A;
	transform(nums1.begin(), nums1.end(), inserter(A, A.begin()), [] (int v) { return make_pair(v, 0); });
	vector<int> rst;
	for (auto& i : nums2) {
		auto itr = A.find(i);
		if (itr != A.end() && itr->second == 0) {
			rst.push_back(i);
			itr->second = -1;
		}
	}
	return rst;
}

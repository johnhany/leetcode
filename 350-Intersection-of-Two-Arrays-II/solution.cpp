#include "solution.hpp"
#include <cmath>


vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() > nums2.size())
		swap(nums1, nums2);
	unordered_map<int, int> A;
	for (auto& i : nums1) {
		auto itr = A.find(i);
		if (itr != A.end()) {
			itr->second++;
		} else {
			A.insert({i, 1});
		}
	}
	vector<int> rst;
	for (auto& i : nums2) {
		auto itr = A.find(i);
		if (itr != A.end() && itr->second) {
			rst.push_back(i);
			itr->second--;
		}
	}
	return rst;
}

#include "solution.hpp"


int Solution::longestConsecutive(vector<int>& nums) {
	unordered_map<int,int> hash;
	int rst = 0;
	int left, right, len;
	for (int i: nums) {
		if (hash.find(i) == hash.end()) {
			auto itr1 = hash.find(i-1);
			if (itr1 != hash.end())
				left = itr1->second;
			else
				left = 0;
			auto itr2 = hash.find(i+1);
			if (itr2 != hash.end())
				right = itr2->second;
			else
				right = 0;
			len = left+right+1;
			rst = max(rst, len);
			hash[i] = 0;
			hash[i-left] = len;
			hash[i+right] = len;
		}
	}
	return rst;
}

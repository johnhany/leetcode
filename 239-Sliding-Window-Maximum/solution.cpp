#include "solution.hpp"
#include <cmath>

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::maxSlidingWindow(vector<int>& nums, int k) {
	int n = nums.size();
	deque<int> q;
	vector<int> rst;
	for (int i=0; i<n; i++) {
		//push
		while (!q.empty() && nums[q.back()] < nums[i]) {
			q.pop_back();
		}
		q.push_back(i);

		//pop
		if (i>=k) {
			int num_out = i-k;
			if (!q.empty() && q.front() <= num_out) {
				q.pop_front();
			}
		}

		//max
		if (i+1>=k) {
			rst.push_back(nums[q.front()]);
		}
	}
	return rst;
}

#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target) {
	vector<vector<int>> res;
	int n = nums.size();
	if (n < 4) return res;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n-3; i++) {
		if (i > 0 && nums[i] == nums[i-1]) continue;
		if ((long)nums[i]+(long)nums[i+1]+(long)nums[i+2]+(long)nums[i+3] > (long)target) break;
		if ((long)nums[i]+(long)nums[n-3]+(long)nums[n-2]+(long)nums[n-1] < (long)target) continue;
		for (int j = i+1; j < n-2; j++) {
			if (j > i+1 && nums[j] == nums[j-1]) continue;
			if ((long)nums[i]+(long)nums[j]+(long)nums[j+1]+(long)nums[j+2] > (long)target) break;
			if ((long)nums[i]+(long)nums[j]+(long)nums[n-2]+(long)nums[n-1] < (long)target) continue;
			int left = j+1, right = n-1;
			while (left < right) {
				long sum = (long)nums[left]+(long)nums[right]+(long)nums[i]+(long)nums[j];
				if (sum < (long)target) left++;
				else if (sum > (long)target) right--;
				else{
					res.push_back({nums[i], nums[j], nums[left], nums[right]});
					do {
						left++;
					} while (nums[left] == nums[left-1] && left < right);
					do {
						right--;
					} while (nums[right] == nums[right+1] && left < right);
				}
			}
		}
	}
	return res;
}

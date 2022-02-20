#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/2/18/23/

TreeNode* Solution::build(vector<int>& nums, int lo, int hi) {
	if (lo > hi) {
		return nullptr;
	}

	int index = -1, maxVal = INT_MIN;
	for (int i = lo; i <= hi; i++) {
		if (maxVal < nums[i]) {
			index = i;
			maxVal = nums[i];
		}
	}

	TreeNode* root = new TreeNode(maxVal);
	root->left = build(nums, lo, index - 1);
	root->right = build(nums, index + 1, hi);

	return root;
}

TreeNode* Solution::constructMaximumBinaryTree(vector<int>& nums) {
	return build(nums, 0, nums.size() - 1);
}

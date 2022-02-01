#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::builder(vector<int>& nums, int left, int right) {
	if (left > right)
		return nullptr;
	int mid = (left+right)/2;
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = builder(nums, left, mid-1);
	root->right = builder(nums, mid+1, right);
	return root;
}

TreeNode* Solution::sortedArrayToBST(vector<int>& nums) {
	int n = nums.size();
	int val = nums[n/2];
	TreeNode* root = new TreeNode(val);
	root->left = builder(nums, 0, n/2-1);
	root->right = builder(nums, n/2+1, n-1);
	return root;
}

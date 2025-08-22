#include "solution.hpp"


TreeNode* Solution::builder(vector<int>& nums, int left, int right) {
	if (left > right) {
		return nullptr;
	}
	int mid = (left + right) / 2;
	TreeNode *root = new TreeNode(nums[mid]);
	root->left = builder(nums, left, mid-1);
	root->right = builder(nums, mid+1, right);
	return root;
}

TreeNode* Solution::sortedArrayToBST(vector<int>& nums) {
	TreeNode *root = builder(nums, 0, nums.size()-1);
	return root;
}

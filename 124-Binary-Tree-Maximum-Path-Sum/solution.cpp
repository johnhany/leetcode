#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/solution/er-cha-shu-zhong-de-zui-da-lu-jing-he-by-leetcode-/

int Solution::helper(TreeNode* root, int& rst) {
	if (root == nullptr) return 0;
	int left = helper(root->left, rst);
	int right = helper(root->right, rst);
	rst = max(rst, root->val + left + right);
	return max(0, root->val + max(left, right));
}

int Solution::maxPathSum(TreeNode* root) {
	int int_max = (int)((~((unsigned int) 0)) >> 1);
    int int_min = ~int_max;
	int rst = int_min;
	helper(root, rst);
	return rst;
}

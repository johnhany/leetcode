#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/house-robber-iii/solution/tong-yong-si-lu-tuan-mie-da-jia-jie-she-wen-ti-b-2/

vector<int> Solution::dp(TreeNode* root) {
	if (root == nullptr)
		return {0, 0};
	vector<int> left = dp(root->left);
	vector<int> right = dp(root->right);

	int rob = root->val + left[0] + right[0];

	int not_rob = max(left[0], left[1])
				+ max(right[0], right[1]);

	return {not_rob, rob};
}

int Solution::rob(TreeNode* root) {
	vector<int> res = dp(root);
    return max(res[0], res[1]);
}

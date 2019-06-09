#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::inorderTraversal(TreeNode* root) {
	if (root == nullptr) return vector<int>{};
	list<int> tmp;
	tmp = inorder(root);
	return vector<int>(std::make_move_iterator(tmp.begin()), std::make_move_iterator(tmp.end()));
}

list<int> Solution::inorder(TreeNode* root) {
	list<int> rst;
	if (root->left != nullptr) {
		rst.splice(rst.end(), inorder(root->left));
	}
	rst.emplace_back(root->val);
	if (root->right != nullptr) {
		rst.splice(rst.end(), inorder(root->right));
	}
	return rst;
}

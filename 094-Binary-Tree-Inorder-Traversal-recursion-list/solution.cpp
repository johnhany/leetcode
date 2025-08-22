#include "solution.hpp"

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

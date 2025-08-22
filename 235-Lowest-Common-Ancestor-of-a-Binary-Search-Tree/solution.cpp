#include "solution.hpp"


TreeNode* Solution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (p->val > q->val)
		swap(p, q);
	while (true) {
		if (p->val > root->val)
			root = root->right;
		else if (q->val < root->val)
			root = root->left;
		else
			return root;
	}
}

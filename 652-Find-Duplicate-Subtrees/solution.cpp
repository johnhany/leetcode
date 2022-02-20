#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode-cn.com/problems/find-duplicate-subtrees/solution/hou-xu-bian-li-xu-lie-hua-hashcun-chu-by-k940/

string Solution::subSearch(TreeNode* root) {
	if (root == nullptr)
		return "#";
	string cur = to_string(root->val) + "," + subSearch(root->left) + subSearch(root->right);
	auto itr = hash.find(cur);
	if (itr != hash.end() && itr->second == 1) {
		rst.push_back(root);
	}
	hash[cur] += 1;
	return cur;
}

vector<TreeNode*> Solution::findDuplicateSubtrees(TreeNode* root) {
	subSearch(root);
    return rst;
}

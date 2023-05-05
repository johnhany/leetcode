#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isCompleteTree(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);

	bool gotNullSoFar = false;
	while(!q.empty()){
		TreeNode* node = q.front();
		q.pop();

		if(node==NULL){
			gotNullSoFar = true;
		}else{
			if(gotNullSoFar==true) return false;
			q.push(node->left);
			q.push(node->right);
		}
	}
	return true;
}

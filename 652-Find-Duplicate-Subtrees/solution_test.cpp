#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,2,3,4,null,2,4,null,null,4";
    TreeNode* root = stringToTreeNode(line);
    vector<TreeNode*> result = Solution().findDuplicateSubtrees(root);
    vector<string> resultVec;
    for (TreeNode* t: result) {
        resultVec.push_back(treeNodeToString(t));
    }

    vector<string> expected{
        "[4,null,null]",
        "[2,4,null,null,null]"
    };

    REQUIRE_THAT( expected, Catch::Matchers::Equals(resultVec) );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "4,1,6,0,2,5,7,null,null,null,3,null,null,null,8";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* result = Solution().convertBST(root);
    string resultStr = treeNodeToString(result);

    string expected = "[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8,null,null,null,null]";

    REQUIRE(resultStr == expected);
}

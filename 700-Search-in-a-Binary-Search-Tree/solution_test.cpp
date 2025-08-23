#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "4,2,7,1,3";
    TreeNode* root = stringToTreeNode(line);
    int target = 2;
    TreeNode* result = Solution().searchBST(root, target);
    string resultStr = treeNodeToString(result);

    string expected = "[2,1,3,null,null,null,null]";

    REQUIRE( resultStr == expected );
}

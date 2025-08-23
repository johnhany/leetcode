#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "5,3,6,2,4,null,7";
    TreeNode* root = stringToTreeNode(line);
    int target = 3;
    TreeNode* result = Solution().deleteNode(root, target);
    string resultStr = treeNodeToString(result);

    string expected = "[5,4,6,2,null,null,7,null,null,null,null]";

    REQUIRE(resultStr == expected);
}

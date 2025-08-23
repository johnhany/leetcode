#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "4,2,7,1,3,6,9";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* result = Solution().invertTree(root);
    string resultStr = treeNodeToString(result);

    string expected = "[4,7,2,9,6,3,1,null,null,null,null,null,null,null,null]";

    REQUIRE_THAT( resultStr, Catch::Matchers::Equals(expected) );
}

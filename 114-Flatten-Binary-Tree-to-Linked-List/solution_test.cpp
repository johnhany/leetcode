#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,2,5,3,4,null,6";
    TreeNode* root = stringToTreeNode(line);
    Solution().flatten(root);
    string resultStr = treeNodeToString(root);

    string expected = "[1,null,2,null,3,null,4,null,5,null,6,null,null]";

    REQUIRE_THAT( resultStr, Catch::Matchers::Equals(expected) );
}

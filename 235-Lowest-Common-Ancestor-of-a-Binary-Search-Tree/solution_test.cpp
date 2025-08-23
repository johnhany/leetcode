#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "6,2,8,0,4,7,9,null,null,3,5";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = stringToTreeNode("2");
    TreeNode* q = stringToTreeNode("8");
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 6;

    REQUIRE( expected == result->val );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "6,2,8,0,4,7,9,null,null,3,5";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = stringToTreeNode("2");
    TreeNode* q = stringToTreeNode("4");
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 2;

    REQUIRE( expected == result->val );
}

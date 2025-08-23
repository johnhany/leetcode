#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "3,5,1,6,2,0,8,null,null,7,4";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = searchInTree(root, 5);
    TreeNode* q = searchInTree(root, 1);
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 3;

    REQUIRE( expected == result->val );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "3,5,1,6,2,0,8,null,null,7,4";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = searchInTree(root, 5);
    TreeNode* q = searchInTree(root, 4);
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 5;

    REQUIRE( expected == result->val );
}

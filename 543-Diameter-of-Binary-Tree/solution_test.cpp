#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,2,3,4,5";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().diameterOfBinaryTree(root);

    int expected=3;

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "3,2,3,null,3,null,1";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().rob(root);

    int expected=7;

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,2,3";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().maxPathSum(root);

    int expected = 6;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "-10,9,20,null,null,15,7";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().maxPathSum(root);

    int expected = 42;

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "3,9,20,null,null,15,7";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "1,2";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string line = "1,null,2";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    REQUIRE( result == expected );
}

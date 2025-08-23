#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,2,2,3,4,4,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isSymmetric(root);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "1,2,2,null,3,null,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isSymmetric(root);

    bool expected = false;

    REQUIRE( result == expected );
}

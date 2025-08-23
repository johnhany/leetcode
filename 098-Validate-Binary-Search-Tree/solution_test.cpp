#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "2,1,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = true;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string line = "5,1,4,null,null,3,6";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = false;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string line = "10,5,15,null,null,6,20";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = false;

    REQUIRE( result == expected );
}

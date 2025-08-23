#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{-10,-3,0,5,9};
    TreeNode *root = Solution().sortedArrayToBST(nums);
    string result = treeNodeToString(root);

    string expected = "[0,-10,5,null,-3,null,9,null,null,null,null]";

    REQUIRE( result == expected );
}

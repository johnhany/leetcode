#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> nums{3,2,1,6,0,5};
    TreeNode* result = Solution().constructMaximumBinaryTree(nums);
    string resultStr = treeNodeToString(result);

    string expected = "[6,3,5,null,2,0,null,null,1,null,null,null,null]";

    REQUIRE_THAT( resultStr, Catch::Matchers::Equals(expected) );
}

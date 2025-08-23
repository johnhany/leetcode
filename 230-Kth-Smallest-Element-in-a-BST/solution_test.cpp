#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "5,3,6,2,4,null,null,1";
    int k = 3;
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().kthSmallest(root, k);

    int expected=3;

    REQUIRE( result == expected );
}

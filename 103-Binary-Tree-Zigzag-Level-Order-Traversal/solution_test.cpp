#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "3,9,20,null,null,15,7";
    TreeNode* root = stringToTreeNode(line);
    vector<vector<int>> result = Solution().zigzagLevelOrder(root);

    vector<vector<int>> expected{
        {3},
        {20,9},
        {15,7}
    };

    REQUIRE( result.size() == expected.size() );

    for (int i = 0; i < result.size(); i++)
        REQUIRE_THAT( result[i], Catch::Matchers::Equals(expected[i]) );
}

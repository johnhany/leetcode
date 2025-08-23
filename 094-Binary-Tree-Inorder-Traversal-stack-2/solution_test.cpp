#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string line = "1,null,2,3";
    TreeNode* root = stringToTreeNode(line);
    vector<int> result = Solution().inorderTraversal(root);

    vector<int> expected={1,3,2};

    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> preorder{1,2,4,5,3,6,7};
    vector<int> postorder{4,5,2,6,7,3,1};
    TreeNode *root = Solution().constructFromPrePost(preorder, postorder);
    string result = treeNodeToString(root);

    string expected = "[1,2,3,4,5,6,7,null,null,null,null,null,null,null,null]";

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> preorder{3,9,20,15,7};
    vector<int> inorder{9,3,15,20,7};
    TreeNode *root = Solution().buildTree(preorder, inorder);
    string result = treeNodeToString(root);

    string expected = "[3, 9, 20, null, null, 15, 7, null, null, null, null]";

    REQUIRE( result == expected );
}

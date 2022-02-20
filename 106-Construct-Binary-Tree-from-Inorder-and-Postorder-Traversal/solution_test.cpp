#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> inorder{9,3,15,20,7};
    vector<int> postorder{9,15,7,20,3};
    TreeNode *root = Solution().buildTree(inorder, postorder);
    string result = treeNodeToString(root);

    string expected = "[3,9,20,null,null,15,7,null,null,null,null]";

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
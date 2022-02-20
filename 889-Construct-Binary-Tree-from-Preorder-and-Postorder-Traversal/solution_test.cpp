#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> preorder{1,2,4,5,3,6,7};
    vector<int> postorder{4,5,2,6,7,3,1};
    TreeNode *root = Solution().buildTree(preorder, postorder);
    string result = treeNodeToString(root);

    string expected = "[1,2,3,4,5,6,7,null,null,null,null,null,null,null,null]";

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
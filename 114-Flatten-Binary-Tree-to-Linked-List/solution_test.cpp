#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "1,2,5,3,4,null,6";
    TreeNode* root = stringToTreeNode(line);
    Solution().flatten(root);
    string resultStr = treeNodeToString(root);

    string expected = "[1,null,2,null,3,null,4,null,5,null,6,null,null]";

    BOOST_CHECK_EQUAL(expected, resultStr);
}

BOOST_AUTO_TEST_SUITE_END()
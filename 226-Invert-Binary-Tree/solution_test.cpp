#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "4,2,7,1,3,6,9";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* result = Solution().invertTree(root);
    string resultStr = treeNodeToString(result);

    string expected = "[4,7,2,9,6,3,1,null,null,null,null,null,null,null,null]";

    BOOST_CHECK_EQUAL(expected, resultStr);
}

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "5,3,6,2,4,null,7";
    TreeNode* root = stringToTreeNode(line);
    int target = 3;
    TreeNode* result = Solution().deleteNode(root, target);
    string resultStr = treeNodeToString(result);

    string expected = "[5,4,6,2,null,null,7,null,null,null,null]";

    BOOST_CHECK_EQUAL(resultStr, expected);
}

BOOST_AUTO_TEST_SUITE_END()
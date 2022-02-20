#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "4,2,7,1,3";
    TreeNode* root = stringToTreeNode(line);
    int target = 2;
    TreeNode* result = Solution().searchBST(root, target);
    string resultStr = treeNodeToString(result);

    string expected = "[2,1,3,null,null,null,null]";

    BOOST_CHECK_EQUAL(resultStr, expected);
}

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "4,1,6,0,2,5,7,null,null,null,3,null,null,null,8";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* result = Solution().convertBST(root);
    string resultStr = treeNodeToString(result);

    string expected = "[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8,null,null,null,null]";

    BOOST_CHECK_EQUAL(resultStr, expected);
}

BOOST_AUTO_TEST_SUITE_END()
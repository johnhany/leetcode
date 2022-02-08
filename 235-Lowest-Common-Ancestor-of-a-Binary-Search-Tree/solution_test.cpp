#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "6,2,8,0,4,7,9,null,null,3,5";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = stringToTreeNode("2");
    TreeNode* q = stringToTreeNode("8");
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 6;

    BOOST_CHECK_EQUAL(result->val, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string line = "6,2,8,0,4,7,9,null,null,3,5";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = stringToTreeNode("2");
    TreeNode* q = stringToTreeNode("4");
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 2;

    BOOST_CHECK_EQUAL(result->val, expected);
}

BOOST_AUTO_TEST_SUITE_END()
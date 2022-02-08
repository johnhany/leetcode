#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "3,5,1,6,2,0,8,null,null,7,4";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = searchInTree(root, 5);
    TreeNode* q = searchInTree(root, 1);
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 3;

    BOOST_CHECK_EQUAL(result->val, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string line = "3,5,1,6,2,0,8,null,null,7,4";
    TreeNode* root = stringToTreeNode(line);
    TreeNode* p = searchInTree(root, 5);
    TreeNode* q = searchInTree(root, 4);
    TreeNode* result = Solution().lowestCommonAncestor(root, p, q);

    int expected = 5;

    BOOST_CHECK_EQUAL(result->val, expected);
}

BOOST_AUTO_TEST_SUITE_END()
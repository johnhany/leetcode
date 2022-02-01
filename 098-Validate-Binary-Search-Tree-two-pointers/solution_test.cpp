#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "2,1,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string line = "5,1,4,null,null,3,6";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string line = "10,5,15,null,null,6,20";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isValidBST(root);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
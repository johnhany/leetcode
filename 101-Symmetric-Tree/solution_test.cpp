#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "1,2,2,3,4,4,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isSymmetric(root);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string line = "1,2,2,null,3,null,3";
    TreeNode* root = stringToTreeNode(line);
    bool result = Solution().isSymmetric(root);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
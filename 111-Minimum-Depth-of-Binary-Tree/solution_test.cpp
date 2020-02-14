#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "3,9,20,null,null,15,7";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string line = "1,2";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string line = "1,null,2";
    TreeNode* root = stringToTreeNode(line);
    int result = Solution().minDepth(root);

    int expected = 2;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
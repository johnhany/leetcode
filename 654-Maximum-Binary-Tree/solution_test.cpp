#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{3,2,1,6,0,5};
    TreeNode* result = Solution().constructMaximumBinaryTree(nums);
    string resultStr = treeNodeToString(result);

    string expected = "[6,3,5,null,2,0,null,null,1,null,null,null,null]";

    BOOST_CHECK_EQUAL(expected, resultStr);
}

BOOST_AUTO_TEST_SUITE_END()
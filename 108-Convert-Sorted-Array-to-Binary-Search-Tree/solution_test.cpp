#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{-10,-3,0,5,9};
    TreeNode *root = Solution().sortedArrayToBST(nums);
    string result = treeNodeToString(root);

    string expected = "[0,-10,5,null,-3,null,9,null,null,null,null]";

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
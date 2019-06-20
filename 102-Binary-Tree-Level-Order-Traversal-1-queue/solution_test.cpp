#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string line = "3,9,20,null,null,15,7";
    TreeNode* root = stringToTreeNode(line);
    vector<vector<int>> result = Solution().levelOrder(root);

    vector<vector<int>> expected{
        {3},
        {9,20},
        {15,7}
    };

    BOOST_REQUIRE_EQUAL(result.size(), expected.size());
    for (int i = 0; i < result.size(); ++i)
        BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
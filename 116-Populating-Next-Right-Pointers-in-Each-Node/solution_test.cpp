#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string nums = "1,2,3,4,5,6,7";
    Node *root = stringToNode(nums);
    root = Solution().connect(root);
    string result = NodeToString(root);

    string expected = "[1,2,3,4,5,6,7]";

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
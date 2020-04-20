#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{1,3,4,2,2};
    int results = Solution().findDuplicate(nums);

    int expected = 2;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{3,1,3,4,2};
    int results = Solution().findDuplicate(nums);

    int expected = 3;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
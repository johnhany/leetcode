#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{100, 4, 200, 1, 3, 2};
    int results = Solution().longestConsecutive(nums);

    int expected = 4;

    BOOST_CHECK_EQUAL(results, expected);
}


BOOST_AUTO_TEST_SUITE_END()
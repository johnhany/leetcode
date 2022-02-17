#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int nums = 2736;
    int results = Solution().maximumSwap(nums);

    int expected = 7236;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int nums = 9973;
    int results = Solution().maximumSwap(nums);

    int expected = 9973;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
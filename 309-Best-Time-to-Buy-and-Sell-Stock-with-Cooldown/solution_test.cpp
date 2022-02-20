#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> prices{1,2,3,0,2};
    int results = Solution().maxProfit(prices);

    int expected = 3;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
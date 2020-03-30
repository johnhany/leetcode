#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> prices{7,1,5,3,6,4};
    int results = Solution().maxProfit(prices);

    int expected = 7;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> prices{7,6,4,3,1};
    int results = Solution().maxProfit(prices);

    int expected = 0;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> prices{3,3,5,0,0,3,1,4};
    int results = Solution().maxProfit(prices);

    int expected = 8;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> prices{1,2,3,4,5};
    int results = Solution().maxProfit(prices);

    int expected = 4;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
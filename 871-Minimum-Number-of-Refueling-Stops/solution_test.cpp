#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<vector<int>> stations{
        {10,60},
        {20,30},
        {30,30},
        {60,40}
    };
    int target = 100;
    int startFuel = 10;
    int result = Solution().minRefuelStops(target, startFuel, stations);

    int expected = 2;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
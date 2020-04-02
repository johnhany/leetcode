#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> gas{1,2,3,4,5};
    vector<int> cost{3,4,5,1,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 3;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> gas{3,1,1,3};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 3;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> gas{3,1,1,1};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> gas{2,3,4};
    vector<int> cost{3,4,3};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> gas{1,1,1,1};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<int> gas{4};
    vector<int> cost{5};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    vector<int> gas{6};
    vector<int> cost{5};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 0;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
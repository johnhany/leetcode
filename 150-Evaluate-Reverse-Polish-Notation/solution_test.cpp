#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<string> line = {"2", "1", "+", "3", "*"};
    int result = Solution().evalRPN(line);

    int expected = 9;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<string> line = {"4", "13", "5", "/", "+"};
    int result = Solution().evalRPN(line);

    int expected = 6;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<string> line = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    int result = Solution().evalRPN(line);

    int expected = 22;

    BOOST_REQUIRE_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
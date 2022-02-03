#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

// #define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string n = "123";
    string results = Solution().nearestPalindromic(n);

    string expected = "121";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string n = "1";
    string results = Solution().nearestPalindromic(n);

    string expected = "0";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string n = "999";
    string results = Solution().nearestPalindromic(n);

    string expected = "1001";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    string n = "2147483647";
    string results = Solution().nearestPalindromic(n);

    string expected = "2147447412";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string n = "807045053224792883";
    string results = Solution().nearestPalindromic(n);

    string expected = "807045053350540708";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
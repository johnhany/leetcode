#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

// #define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string num1 = "2";
    string num2 = "3";
    string result = Solution().multiply(num1, num2);

    string expected = "6";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string num1 = "123";
    string num2 = "456";
    string result = Solution().multiply(num1, num2);

    string expected = "56088";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    string num1 = "0";
    string num2 = "0";
    string result = Solution().multiply(num1, num2);

    string expected = "0";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    string num1 = "999";
    string num2 = "999";
    string result = Solution().multiply(num1, num2);

    string expected = "998001";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
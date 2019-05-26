#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int x = 4;
    int result = Solution().mySqrt(x);

    int expected = 2;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int x = 8;
    int result = Solution().mySqrt(x);

    int expected = 2;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    int x = 1;
    int result = Solution().mySqrt(x);

    int expected = 1;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    int x = 0;
    int result = Solution().mySqrt(x);

    int expected = 0;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    int x = 2147395599;
    int result = Solution().mySqrt(x);

    int expected = 46339;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int dividend = 10, divisor = 3;
    int result = Solution().divide(dividend, divisor);

    int expected = 3;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int dividend = 7, divisor = -3;
    int result = Solution().divide(dividend, divisor);

    int expected = -2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    int dividend = -2147483648, divisor = 1;
    int result = Solution().divide(dividend, divisor);

    int expected = -2147483648;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    int dividend = 2147483647, divisor = 1;
    int result = Solution().divide(dividend, divisor);

    int expected = 2147483647;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    int dividend = 256, divisor = 2147483647;
    int result = Solution().divide(dividend, divisor);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    int dividend = -2147483648, divisor = -1;
    int result = Solution().divide(dividend, divisor);

    int expected = 2147483647;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    int dividend = 1004958205, divisor = -2137325331;
    int result = Solution().divide(dividend, divisor);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest8)
{
    int dividend = -1021989372, divisor = -82778243;
    int result = Solution().divide(dividend, divisor);

    int expected = 12;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest9)
{
    int dividend = 2147483647, divisor = 256;
    int result = Solution().divide(dividend, divisor);

    int expected = 8388607;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest10)
{
    int dividend = -2147483648, divisor = 255;
    int result = Solution().divide(dividend, divisor);

    int expected = -8421504;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest11)
{
    int dividend = 2147483647, divisor = 2;
    int result = Solution().divide(dividend, divisor);

    int expected = 1073741823;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest12)
{
    int dividend = -2147483648, divisor = -1109186033;
    int result = Solution().divide(dividend, divisor);

    int expected = 1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest13)
{
    int dividend = -2147483648, divisor = 1262480350;
    int result = Solution().divide(dividend, divisor);

    int expected = -1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest14)
{
    int dividend = -2147483648, divisor = 2;
    int result = Solution().divide(dividend, divisor);

    int expected = -1073741824;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
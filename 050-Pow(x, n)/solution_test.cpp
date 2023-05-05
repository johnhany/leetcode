#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

namespace tt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    double x = 2.0;
    int n = 10;
    double result = Solution().myPow(x, n);

    double expected = 1024.0;

    BOOST_TEST(result == expected, tt::tolerance(0.0000001));
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    double x = 2.1;
    int n = 3;
    double result = Solution().myPow(x, n);

    double expected = 9.261;

    BOOST_TEST(result == expected, tt::tolerance(0.0000001));
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    double x = 2.0;
    int n = -2;
    double result = Solution().myPow(x, n);

    double expected = 0.25;

    BOOST_TEST(result == expected, tt::tolerance(0.0000001));
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    double x = 1.0;
    int n = -2147483648;
    double result = Solution().myPow(x, n);

    double expected = 1.0;

    BOOST_TEST(result == expected, tt::tolerance(0.0000001));
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    double x = 2;
    int n = 5;
    double result = Solution().myPow(x, n);

    double expected = 32.0;

    BOOST_TEST(result == expected, tt::tolerance(0.0000001));
}

BOOST_AUTO_TEST_SUITE_END()
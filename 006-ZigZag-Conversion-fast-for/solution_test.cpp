#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    string input = "PAYPALISHIRING";
    int numRows = 3;
    string results = Solution().convert(input, numRows);

    string expected = "PAHNAPLSIIGYIR";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    string input = "PAYPALISHIRING";
    int numRows = 4;
    string results = Solution().convert(input, numRows);

    string expected = "PINALSIGYAHRPI";
    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
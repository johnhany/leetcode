#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> num1{1, 3};
    vector<int> num2{2};
    float results = Solution().findMedianSortedArrays(num1, num2);
    float expected = 2.0;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> num1{1, 2};
    vector<int> num2{3, 4};
    float results = Solution().findMedianSortedArrays(num1, num2);
    float expected = 2.5;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
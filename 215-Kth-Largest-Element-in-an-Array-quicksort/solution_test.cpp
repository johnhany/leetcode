#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{3,2,1,5,6,4};
    int k = 2;
    int results = Solution().findKthLargest(nums, k);

    int expected = 5;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{3,2,3,1,2,4,5,5,6};
    int k = 4;
    int results = Solution().findKthLargest(nums, k);

    int expected = 4;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{3,2,3,1,2,4,5,5,6};
    int k = 7;
    int results = Solution().findKthLargest(nums, k);

    int expected = 2;

    BOOST_CHECK_EQUAL(results, expected);
}

BOOST_AUTO_TEST_SUITE_END()
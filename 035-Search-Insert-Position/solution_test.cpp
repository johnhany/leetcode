#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{1,3,5,6};
    int target = 5;
    int result = Solution().searchInsert(nums, target);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{1,3,5,6};
    int target = 2;
    int result = Solution().searchInsert(nums, target);

    int expected = 1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{1,3,5,6};
    int target = 7;
    int result = Solution().searchInsert(nums, target);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{1,3,5,6};
    int target = 0;
    int result = Solution().searchInsert(nums, target);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
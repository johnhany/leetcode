#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 0;
    int result = Solution().search(nums, target);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 3;
    int result = Solution().search(nums, target);

    int expected = -1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{0,1,2,4,5,6,7};
    int target = 3;
    int result = Solution().search(nums, target);

    int expected = -1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{0,1,2,4,5,6,7};
    int target = 5;
    int result = Solution().search(nums, target);

    int expected = 4;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{3,1};
    int target = 0;
    int result = Solution().search(nums, target);

    int expected = -1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<int> nums{8,9,2,3,4};
    int target = 9;
    int result = Solution().search(nums, target);

    int expected = 1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
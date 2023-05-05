#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{2,3,1,1,4};
    bool result = Solution().canJump(nums);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{3,2,1,0,4};
    bool result = Solution().canJump(nums);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{2,0};
    bool result = Solution().canJump(nums);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{1,0,2};
    bool result = Solution().canJump(nums);

    bool expected = false;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{2,0,0};
    bool result = Solution().canJump(nums);

    bool expected = true;

    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{-1, 2, 1, -4};
    int target = 1;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{-1, 0, 1, 2, 3};
    int target = 0;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{-1, 0, 1, 2, 3};
    int target = 10;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 6;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{0, 1, 2};
    int target = 3;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 3;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{1, 1, 1, 0};
    int target = -100;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<int> nums{1, 2, 5, 10, 11};
    int target = 12;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 13;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest7)
{
    vector<int> nums{1, 2, 4, 8, 16, 32, 64, 128};
    int target = 82;
    int result = Solution().threeSumClosest(nums, target);

    int expected = 82;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
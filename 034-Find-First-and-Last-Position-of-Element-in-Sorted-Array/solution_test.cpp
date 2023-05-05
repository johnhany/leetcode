#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{5,7,7,8,8,10};
    int target = 8;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{3,4};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{5,7,7,8,8,10};
    int target = 6;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{5,7,7,8,8,10};
    int target = 4;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{5,7,7,8,8,10};
    int target = 11;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{5,5,5};
    int target = 5;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{0,2};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<int> nums{5,5,5};
    int target = 4;
    vector<int> result = Solution().searchRange(nums, target);

    vector<int> expected{-1,-1};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{3,3,5,5,6,7};

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{1};
    int k = 1;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{1};

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{-7,-8,7,5,7,1,6,0};
    int k = 4;
    vector<int> results = Solution().maxSlidingWindow(nums, k);

    vector<int> expected{7,7,7,7,7};

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
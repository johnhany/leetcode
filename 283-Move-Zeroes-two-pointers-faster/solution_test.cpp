#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{0,1,0,3,12};
    Solution().moveZeroes(nums);

    vector<int> expected{1,3,12,0,0};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
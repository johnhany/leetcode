#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest)
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;

    vector<int> results = Solution().twoSum(nums, target);

    vector<int> expected{0, 1};

    BOOST_CHECK_EQUAL_COLLECTIONS(results.begin(), results.end(),
                                  expected.begin(), expected.end());
}
BOOST_AUTO_TEST_SUITE_END()
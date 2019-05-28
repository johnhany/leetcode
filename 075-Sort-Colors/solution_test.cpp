#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{2,0,2,1,1,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,2,2};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{2,0,1,2,0,1,2,0,1};
    Solution().sortColors(nums);

    vector<int> expected{0,0,0,1,1,1,2,2,2};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{2,2,2,0,0,1,1,1};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,1,2,2,2};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{2,2,2,0,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,2,2,2};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{1,1,1,0,0};
    Solution().sortColors(nums);

    vector<int> expected{0,0,1,1,1};

    BOOST_REQUIRE_EQUAL(nums.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(),
                                  expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
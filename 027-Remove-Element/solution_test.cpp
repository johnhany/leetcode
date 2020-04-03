#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{3,2,2,3};
    int val = 3;
    int result = Solution().removeElement(nums, val);

    int expected = 2;
    vector<int> expected_nums{2, 2};
    BOOST_CHECK_EQUAL(result, expected);
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.begin() + expected,
                                  expected_nums.begin(), expected_nums.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;
    int result = Solution().removeElement(nums, val);

    int expected = 5;
    vector<int> expected_nums{0,1,4,0,3};
    BOOST_CHECK_EQUAL(result, expected);
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.begin() + expected,
                                  expected_nums.begin(), expected_nums.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{};
    int val = 0;
    int result = Solution().removeElement(nums, val);

    int expected = 0;
    vector<int> expected_nums{};
    BOOST_CHECK_EQUAL(result, expected);
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.begin() + expected,
                                  expected_nums.begin(), expected_nums.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{5};
    int val = 5;
    int result = Solution().removeElement(nums, val);

    int expected = 0;
    vector<int> expected_nums{};
    BOOST_CHECK_EQUAL(result, expected);
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.begin() + expected,
                                  expected_nums.begin(), expected_nums.end());
}

BOOST_AUTO_TEST_SUITE_END()
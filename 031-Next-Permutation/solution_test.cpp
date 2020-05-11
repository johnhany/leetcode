#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

struct less_than_key {
    inline bool operator() (const vector<int>& vec1, const vector<int>& vec2) {
        if (vec1.size() == vec2.size()) {
            for (int i = 0; i < vec1.size(); i++) {
                if (vec1[i] < vec2[i]) return true;
                else if (vec1[i] > vec2[i]) return false;
            }
        } else return false;
        return false;
    }
};

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums{1,2,3};
    Solution().nextPermutation(nums);

    vector<int> expected{1,3,2};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{3,2,1};
    Solution().nextPermutation(nums);

    vector<int> expected{1,2,3};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{1,1,5};
    Solution().nextPermutation(nums);

    vector<int> expected{1,5,1};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{3,2,1};
    Solution().nextPermutation(nums);

    vector<int> expected{1,2,3};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest5)
{
    vector<int> nums{1,1};
    Solution().nextPermutation(nums);

    vector<int> expected{1,1};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest6)
{
    vector<int> nums{1,5,1};
    Solution().nextPermutation(nums);

    vector<int> expected{5,1,1};
    BOOST_CHECK_EQUAL_COLLECTIONS(nums.begin(), nums.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
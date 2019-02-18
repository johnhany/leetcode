#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
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
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{{-1, 0, 1}, {-1, -1, 2}};
    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums{-5, 1, 2, 3, 4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{{-5, 1, 4}, {-5, 2, 3}};
    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums{0, 1, 2, 3, 4};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{};
    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    vector<int> nums{};
    vector<vector<int>> results = Solution().threeSum(nums);

    vector<vector<int>> expected{};
    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()
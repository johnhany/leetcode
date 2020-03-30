#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

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

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    int numRows = 5;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1},
        {1,1},
        {1,2,1},
        {1,3,3,1},
        {1,4,6,4,1}
    };

    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int numRows = 0;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{};

    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    int numRows = 1;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1}
    };

    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}

BOOST_AUTO_TEST_CASE(PlainTest4)
{
    int numRows = 2;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1},
        {1,1}
    };

    BOOST_CHECK_EQUAL(results.size(), expected.size());
    sort(results.begin(), results.end(), less_than_key());
    sort(expected.begin(), expected.end(), less_than_key());
    for (int i = 0; i < results.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(results[i].begin(), results[i].end(), expected[i].begin(), expected[i].end());
}


BOOST_AUTO_TEST_SUITE_END()
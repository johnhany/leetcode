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
    int n = 3;
    int k = 3;
    string result = Solution().getPermutation(n, k);

    string expected = "213";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    int n = 4;
    int k = 9;
    string result = Solution().getPermutation(n, k);

    string expected = "2314";
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()
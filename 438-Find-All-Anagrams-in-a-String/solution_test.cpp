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
    string s = "cbaebabacd";
    string t = "abc";
    vector<int> result = Solution().findAnagrams(s, t);

    vector<int> expected{0,6};
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
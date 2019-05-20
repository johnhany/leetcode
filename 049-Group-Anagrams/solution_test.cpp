#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

struct less_than_key {
    inline bool operator() (const vector<string>& vec1, const vector<string>& vec2) {
        for (int i = 0; i < vec1.size(); i++) {
            int rst = vec1[i].compare(vec2[i]);
            if (rst < 0) return true;
            else if (rst > 0) return false;
            if (i == vec2.size()-1) return false;
        }
        if (vec1.size() < vec2.size()) return true;
        else return false;
    }
};

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<string> strs{
        "eat", "tea", "tan", "ate", "nat", "bat"
    };
    vector<vector<string>> result = Solution().groupAnagrams(strs);

    vector<vector<string>> expected{
        {"ate","eat","tea"},
        {"nat","tan"},
        {"bat"}
    };

    vector<vector<string>> new_result, new_expected;
    set<string> heap;
    for (auto s:result) {
        vector<string> tmp;
        for (int i = 0; i < s.size(); ++i) {
            heap.emplace(s[i]);
        }
        for (int i = 0; i < s.size(); ++i) {
            auto itr = heap.begin();
            tmp.emplace_back(*itr);
            heap.erase(itr);
        }
        new_result.emplace_back(tmp);
    }
    for (auto s:expected) {
        vector<string> tmp;
        for (int i = 0; i < s.size(); ++i) {
            heap.emplace(s[i]);
        }
        for (int i = 0; i < s.size(); ++i) {
            auto itr = heap.begin();
            tmp.emplace_back(*itr);
            heap.erase(itr);
        }
        new_expected.emplace_back(tmp);
    }
    BOOST_CHECK_EQUAL(new_result.size(), new_expected.size());
    sort(new_result.begin(), new_result.end(), less_than_key());
    sort(new_expected.begin(), new_expected.end(), less_than_key());
    for (int i = 0; i < new_result.size(); i++)
        BOOST_CHECK_EQUAL_COLLECTIONS(new_result[i].begin(), new_result[i].end(), new_expected[i].begin(), new_expected[i].end());
}

BOOST_AUTO_TEST_SUITE_END()
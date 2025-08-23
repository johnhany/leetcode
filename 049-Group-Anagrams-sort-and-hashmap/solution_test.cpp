#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"

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


TEST_CASE( "Running solution test 1" ) {
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
    sort(new_result.begin(), new_result.end(), less_than_key());
    sort(new_expected.begin(), new_expected.end(), less_than_key());

    REQUIRE( new_result.size() == new_expected.size() );

    for (int i = 0; i < new_result.size(); i++)
        REQUIRE_THAT( new_result[i], Catch::Matchers::Equals(new_expected[i]) );
}

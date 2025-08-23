#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"

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


TEST_CASE( "Running solution test 1" ) {
    string s = "cbaebabacd";
    string t = "abc";
    vector<int> result = Solution().findAnagrams(s, t);

    vector<int> expected{0,6};
    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

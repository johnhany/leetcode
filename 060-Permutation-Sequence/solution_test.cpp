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
    int n = 3;
    int k = 3;
    string result = Solution().getPermutation(n, k);

    string expected = "213";
    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

TEST_CASE( "Running solution test 2" ) {
    int n = 4;
    int k = 9;
    string result = Solution().getPermutation(n, k);

    string expected = "2314";
    REQUIRE_THAT( result, Catch::Matchers::Equals(expected) );
}

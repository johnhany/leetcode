#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> results = Solution().findRepeatedDnaSequences(s);

    vector<string> expected{
        "AAAAACCCCC", "CCCCCAAAAA"
    };

    REQUIRE_THAT( expected, Catch::Matchers::Equals(results) );
}

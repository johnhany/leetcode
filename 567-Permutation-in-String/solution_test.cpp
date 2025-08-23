#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "eidbaooo";
    string t = "ab";
    bool result = Solution().checkInclusion(t, s);

    bool expected = true;

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<string> deadends{"0201","0101","0102","1212","2002"};
    string target = "0202";
    int result = Solution().openLock(deadends, target);

    int expected = 6;

    REQUIRE( result == expected );
}

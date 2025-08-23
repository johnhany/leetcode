#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int x = 3;
    int result = Solution().numTrees(x);

    int expected = 5;

    REQUIRE( result == expected );
}

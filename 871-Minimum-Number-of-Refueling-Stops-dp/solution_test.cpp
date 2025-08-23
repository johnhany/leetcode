#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> stations{
        {10,60},
        {20,30},
        {30,30},
        {60,40}
    };
    int target = 100;
    int startFuel = 10;
    int result = Solution().minRefuelStops(target, startFuel, stations);

    int expected = 2;

    REQUIRE( result == expected );
}

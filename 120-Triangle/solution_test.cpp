#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> triangle{
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };
    int result = Solution().minimumTotal(triangle);

    int expected = 11;

    REQUIRE( result == expected );
}

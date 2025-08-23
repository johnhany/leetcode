#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> grid{
        {1,3,1},
        {1,5,1},
        {4,2,1}
    };
    int result = Solution().minPathSum(grid);

    int expected = 7;

    REQUIRE( result == expected );
}

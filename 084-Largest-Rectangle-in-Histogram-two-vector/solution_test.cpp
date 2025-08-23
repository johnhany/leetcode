#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> heights{2,1,5,6,2,3};
    int result = Solution().largestRectangleArea(heights);

    int expected = 10;

    REQUIRE( result == expected );
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> prices{1,2,3,0,2};
    int results = Solution().maxProfit(prices);

    int expected = 3;

    REQUIRE( results == expected );
}

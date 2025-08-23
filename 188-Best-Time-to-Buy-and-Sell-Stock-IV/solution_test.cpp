#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> prices{3,2,6,5,0,3};
    int k = 2;
    int results = Solution().maxProfit(k, prices);

    int expected = 7;

    REQUIRE( results == expected );
}

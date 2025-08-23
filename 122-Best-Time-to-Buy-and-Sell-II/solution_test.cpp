#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> prices{7,1,5,3,6,4};
    int results = Solution().maxProfit(prices);

    int expected = 7;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> prices{7,6,4,3,1};
    int results = Solution().maxProfit(prices);

    int expected = 0;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> prices{3,3,5,0,0,3,1,4};
    int results = Solution().maxProfit(prices);

    int expected = 8;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> prices{1,2,3,4,5};
    int results = Solution().maxProfit(prices);

    int expected = 4;

    REQUIRE( results == expected );
}

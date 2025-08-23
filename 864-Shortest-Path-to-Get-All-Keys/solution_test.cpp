#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<string> grid{
        "@.a.#",
        "###.#",
        "b.A.B"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = 8;
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<string> grid{
        "@..aA",
        "..B#.",
        "....b"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = 6;
    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<string> grid{
        "@Aa"
    };
    int results = Solution().shortestPathAllKeys(grid);

    int expected = -1;
    REQUIRE( results == expected );
}

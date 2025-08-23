#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int numRows = 5;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1},
        {1,1},
        {1,2,1},
        {1,3,3,1},
        {1,4,6,4,1}
    };

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    int numRows = 0;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{};

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 3" ) {
    int numRows = 1;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1}
    };

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 4" ) {
    int numRows = 2;
    vector<vector<int>> results = Solution().generate(numRows);

    vector<vector<int>> expected{
        {1},
        {1,1}
    };

    REQUIRE( results.size() == expected.size() );

    for (int i = 0; i < results.size(); i++)
        REQUIRE_THAT( results[i], Catch::Matchers::Equals(expected[i]) );
}


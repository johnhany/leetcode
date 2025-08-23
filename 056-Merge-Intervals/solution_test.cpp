#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result = Solution().merge(intervals);

    vector<vector<int>> expected{{1,6},{8,10},{15,18}};

    REQUIRE( result.size() == expected.size() );

    for (int i = 0; i < result.size(); i++)
        REQUIRE_THAT( result[i], Catch::Matchers::Equals(expected[i]) );
}

TEST_CASE( "Running solution test 2" ) {
    vector<vector<int>> intervals{{1,4},{4,5}};
    vector<vector<int>> result = Solution().merge(intervals);

    vector<vector<int>> expected{{1,5}};

    REQUIRE( result.size() == expected.size() );

    for (int i = 0; i < result.size(); i++)
        REQUIRE_THAT( result[i], Catch::Matchers::Equals(expected[i]) );
}

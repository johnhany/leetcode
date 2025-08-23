#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<int> gas{1,2,3,4,5};
    vector<int> cost{3,4,5,1,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 3;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<int> gas{3,1,1,3};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 3;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<int> gas{3,1,1,1};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 4" ) {
    vector<int> gas{2,3,4};
    vector<int> cost{3,4,3};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 5" ) {
    vector<int> gas{1,1,1,1};
    vector<int> cost{2,2,2,2};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 6" ) {
    vector<int> gas{4};
    vector<int> cost{5};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = -1;

    REQUIRE( results == expected );
}

TEST_CASE( "Running solution test 7" ) {
    vector<int> gas{6};
    vector<int> cost{5};
    int results = Solution().canCompleteCircuit(gas, cost);

    int expected = 0;

    REQUIRE( results == expected );
}

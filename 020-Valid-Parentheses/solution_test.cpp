#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string s = "()";

    bool expected = true;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string s = "()[]{}";

    bool expected = true;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string s = "(]";

    bool expected = false;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string s = "([)]";

    bool expected = false;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string s = "{[]}";

    bool expected = true;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string s = "";

    bool expected = true;

    REQUIRE( Solution().isValid(s) == expected );
}

TEST_CASE( "Running solution test 7" ) {
    string s = "]";

    bool expected = false;

    REQUIRE( Solution().isValid(s) == expected );
}
